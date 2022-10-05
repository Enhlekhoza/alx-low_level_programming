/**

 * count_words - Counts the number of words contained within a string.

 * @str: The string to be searched.

 *

 * Return: The number of words contained within str.

 */

int count_words(char *str)

{

        int index = 0, words = 0, len = 0;


        for (index = 0; *(str + index); index++)

                len++;


        for (index = 0; index < len; index++)

        {

                if (*(str + index) != ' ')

                {

                        words++;

                        index += word_len(str + index);

                }

        }


        return (words);

}
