// from server: 100% by king_originala
// roc 2008-06 0044a170  unit: CRbxDocTemplate  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044a170
//
// 0044a170  56                   push esi
// 0044a171  8bf1                 mov esi, ecx
// 0044a173  6a01                 push 1
// 0044a175  b9e0db9600           mov ecx, 0x96dbe0
// 0044a17a  e871faffff           call 0x449bf0
// 0044a17f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044a183  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044a187  50                   push eax
// 0044a188  51                   push ecx
// 0044a189  8bce                 mov ecx, esi
// 0044a18b  e8ae702500           call 0x6a123e
// 0044a190  5e                   pop esi
// 0044a191  c20800               ret 8

struct State {
    void set(int);
};

extern State state;

struct S {
    void* f(const char*, int);
    void* base(const char*, int);
};

void* S::f(const char* name, int flag)
{
    state.set(1);
    return base(name, flag);
}
