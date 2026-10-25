// from server: 100% by king_originala
// roc 2008-06 0044deb0  unit: CRobloxControlColorSelector  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044deb0
//
// 0044deb0  8b442404             mov eax, dword ptr [esp + 4]
// 0044deb4  56                   push esi
// 0044deb5  8bf1                 mov esi, ecx
// 0044deb7  8b08                 mov ecx, dword ptr [eax]
// 0044deb9  890e                 mov dword ptr [esi], ecx
// 0044debb  8b5004               mov edx, dword ptr [eax + 4]
// 0044debe  83c008               add eax, 8
// 0044dec1  50                   push eax
// 0044dec2  8d4e08               lea ecx, [esi + 8]
// 0044dec5  895604               mov dword ptr [esi + 4], edx
// 0044dec8  ff15d43e8000         call dword ptr [0x803ed4]
// 0044dece  8bc6                 mov eax, esi
// 0044ded0  5e                   pop esi
// 0044ded1  c20400               ret 4

struct Part {
    unsigned char data[4];
};

extern void (__thiscall *copyPart)(Part *, const Part *);

struct S {
    int first;
    int second;
    Part part;

    S &copy(const S &source);
};

S &S::copy(const S &source)
{
    first = source.first;
    second = source.second;
    copyPart(&part, &source.part);
    return *this;
}
