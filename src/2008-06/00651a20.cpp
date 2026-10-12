// from server: 68% by king_originala
struct Element
{
    unsigned long* link;
    unsigned long reserved[2];
    unsigned long first;
    unsigned long last;
    unsigned long end;
};

struct Temporary
{
    unsigned long value;
    Temporary(unsigned long v) : value(v) {}
    ~Temporary() {}
};

Element* __cdecl swap_backward(Element* first, Element* last, Element* output)
{
    while (last != first)
    {
        --last;
        --output;

        if (output != last)
        {
            unsigned long* old = output->link;
            output->link = last->link;
            last->link = old;

            if (output->link != old)
            {
                Temporary temporary(*output->link);
                *output->link = *old;
                *old = temporary.value;
            }

            if (&output->first != &last->first)
            {
                Temporary temporary(last->first);
                last->first = output->first;
                output->first = temporary.value;
            }

            if (&output->last != &last->last)
            {
                Temporary temporary(last->last);
                last->last = output->last;
                output->last = temporary.value;
            }

            if (&output->end != &last->end)
            {
                Temporary temporary(output->end);
                output->end = last->end;
                last->end = temporary.value;
            }
        }
    }

    return output;
}
