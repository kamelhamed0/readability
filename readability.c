#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);
int main(void)
{
    string Text = get_string("Text: ");
    printf("%s\n", Text);
    int letters = count_letters(Text);
    printf("%i letters\n", letters);
    int words = count_words(Text);
    printf("%i words\n", words);
    int sentences = count_sentences(Text);
    printf("%i sentences\n", sentences);

}

int count_letters (string text)
{
int letters=0;
    for (int i=0; i<strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            letters=letters+1;
        }
    }
return letters;
}
int count_words(string text)
{
int words=1;
for (int i=0; i<strlen(text); i++)
{
    if (isblank(text[i]))
    {
        words=words+1;
    }
}
return words;
}
int count_sentences(string text)
{
int sentences=0;
for (int i=0; i<strlen(text); i++)
{
    if (ispunct(text[i]))
    {
        sentences=sentences+1;
    }
}
return sentences;
}
