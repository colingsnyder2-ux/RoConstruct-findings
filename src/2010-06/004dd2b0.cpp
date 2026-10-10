// from server: 67% by atomic.potato
struct S_func_004dd2b0 {
    void __cdecl f(unsigned int count, char* data);
};

void S_func_004dd2b0::f(unsigned int count, char* data)
{
    unsigned int i = 0;
    unsigned int half = count >> 1;
    if (half != 0) {
        char* right = data + count - 1;
        while (i < half) {
            char temp = right[0];
            right[0] = data[i];
            data[i] = temp;
            ++i;
            --right;
        }
    }
}
