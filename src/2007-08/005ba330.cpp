// from server: 54% by colin
// roc 2007-08 005ba330  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ba330

extern "C" unsigned int __cdecl sub_55E610();

struct S {
    int f();
};

int S::f()
{
    int i = 0;
    do {
        sub_55E610();
        i++;
    } while (i < sub_55E610());
    return 0;
}
