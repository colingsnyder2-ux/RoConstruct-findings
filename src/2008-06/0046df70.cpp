// from server: 93% by colin
struct String {
    char storage[28];
    String& operator=(const String&);
};

struct Element {
    int a;
    int b;
    String s1;
    String s2;
};

Element* copy_backward(Element* first, Element* last, Element* dest)
{
    if (first != last) {
        do {
            last--;
            dest--;
            dest->a = last->a;
            dest->b = last->b;
            dest->s1 = last->s1;
            dest->s2 = last->s2;
        } while (last != first);
    }
    return dest;
}
