// from server: 79% by colin
// roc 2007-08 004123a0  unit: VCContent::?$CComObject  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004123a0
//
// 004123a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004123a4  834108ff             add dword ptr [ecx + 8], -1
// 004123a8  56                   push esi
// 004123a9  8b7108               mov esi, dword ptr [ecx + 8]
// 004123ac  750d                 jne 0x4123bb
// 004123ae  85c9                 test ecx, ecx
// 004123b0  7409                 je 0x4123bb
// 004123b2  8b01                 mov eax, dword ptr [ecx]
// 004123b4  8b5010               mov edx, dword ptr [eax + 0x10]
// 004123b7  6a01                 push 1
// 004123b9  ffd2                 call edx
// 004123bb  8bc6                 mov eax, esi
// 004123bd  5e                   pop esi
// 004123be  c20400               ret 4

struct VCContent_CComObject {
    int Release(int);
};

int VCContent_CComObject::Release(int)
{
    int* self = reinterpret_cast<int*>(this);
    int count = --self[2];
    if (count == 0 && this != 0) {
        void*** vtbl = reinterpret_cast<void***>(this);
        void (__stdcall *fn)(int) = reinterpret_cast<void (__stdcall *)(int)>(vtbl[0][4]);
        fn(1);
    }
    return count;
}
