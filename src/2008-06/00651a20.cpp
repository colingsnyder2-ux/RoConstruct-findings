// from server: 30% by king_originala
struct Entry
{
    unsigned int* link;
    unsigned char padding[8];
    unsigned int a;
    unsigned int b;
    unsigned int c;
};

struct Guard
{
    ~Guard() {}
};

void __cdecl swap_backward(Entry* first, Entry* last, Entry* output)
{
    Guard guard;
    while (first != last)
    {
        --last;
        --output;
        if (output != last)
        {
            unsigned int* p = last->link;
            unsigned int* q = output->link;
            output->link = p;
            last->link = q;

            if (output->link != q)
            {
                unsigned int t = *output->link;
                *output->link = *q;
                *q = t;
            }

            if (&output->a != &last->a)
            {
                unsigned int t = last->a;
                last->a = output->a;
                output->a = t;
            }

            if (&output->b != &last->b)
            {
                unsigned int t = last->b;
                last->b = output->b;
                output->b = t;
            }

            if (&output->c != &last->c)
            {
                unsigned int t = output->c;
                output->c = last->c;
                last->c = t;
            }
        }
    }
}
