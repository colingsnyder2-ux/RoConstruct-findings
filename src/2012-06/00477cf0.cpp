// roc 2012-06 00477cf0  unit: CRobloxControlColorSelector  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00477cf0
//
// 00477cf0  8b442404             mov eax, dword ptr [esp + 4]
// 00477cf4  56                   push esi
// 00477cf5  8bf1                 mov esi, ecx
// 00477cf7  8b08                 mov ecx, dword ptr [eax]
// 00477cf9  890e                 mov dword ptr [esi], ecx
// 00477cfb  8b5004               mov edx, dword ptr [eax + 4]
// 00477cfe  83c008               add eax, 8
// 00477d01  50                   push eax
// 00477d02  8d4e08               lea ecx, [esi + 8]
// 00477d05  895604               mov dword ptr [esi + 4], edx
// 00477d08  ff158047b200         call dword ptr [0xb24780]
// 00477d0e  8bc6                 mov eax, esi
// 00477d10  5e                   pop esi
// 00477d11  c20400               ret 4
// copied from an identical function in another client (function ?copy@S@@QAEAAU1@ABU1@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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