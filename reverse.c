void reverse(char* a, char* b)
{
    char c = *a;
    *a = *b;
    *b = c;
}
void reverseString(char* s, int sSize)
{
    for (int left = 0, right =  sSize - 1; left < right; left++, right--)
    {
        reverse(s+left, s+right);
    }
}
