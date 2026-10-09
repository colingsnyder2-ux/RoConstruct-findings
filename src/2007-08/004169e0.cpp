// from server: 79% by colin
// roc 2007-08 004169e0  unit: VCLuaFunction::?$CComObject  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004169e0
//
// 004169e0  56                   push esi
// 004169e1  8bf1                 mov esi, ecx
// 004169e3  8b4610               mov eax, dword ptr [esi + 0x10]
// 004169e6  83c001               add eax, 1
// 004169e9  394608               cmp dword ptr [esi + 8], eax
// 004169ec  57                   push edi
// 004169ed  7707                 ja 0x4169f6
// 004169ef  6a01                 push 1
// 004169f1  e8cafcffff           call 0x4166c0
// 004169f6  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 004169f9  037e10               add edi, dword ptr [esi + 0x10]
// 004169fc  8b4608               mov eax, dword ptr [esi + 8]
// 004169ff  3bc7                 cmp eax, edi
// 00416a01  7702                 ja 0x416a05
// 00416a03  2bf8                 sub edi, eax
// 00416a05  8b4e04               mov ecx, dword ptr [esi + 4]
// 00416a08  833cb900             cmp dword ptr [ecx + edi*4], 0
// 00416a0c  7510                 jne 0x416a1e
// 00416a0e  6a0c                 push 0xc
// 00416a10  e8e1942100           call 0x62fef6
// 00416a15  8b5604               mov edx, dword ptr [esi + 4]
// 00416a18  83c404               add esp, 4
// 00416a1b  8904ba               mov dword ptr [edx + edi*4], eax
// 00416a1e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00416a22  8b4e04               mov ecx, dword ptr [esi + 4]
// 00416a25  8b14b9               mov edx, dword ptr [ecx + edi*4]
// 00416a28  50                   push eax
// 00416a29  52                   push edx
// 00416a2a  e8712d0300           call 0x4497a0
// 00416a2f  83461001             add dword ptr [esi + 0x10], 1
// 00416a33  83c408               add esp, 8
// 00416a36  5f                   pop edi
// 00416a37  5e                   pop esi
// 00416a38  c20400               ret 4

struct VCLuaFunction {
    void f(int);
};

extern "C" void __cdecl sub_4166C0(int);
extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" void __cdecl sub_4497A0(void*, int);

void VCLuaFunction::f(int a)
{
    unsigned int cap = *(unsigned int*)((char*)this + 8);
    unsigned int pos = *(unsigned int*)((char*)this + 0x10);
    if (cap <= pos + 1)
        sub_4166C0(1);

    unsigned int idx = *(unsigned int*)((char*)this + 0xc) + *(unsigned int*)((char*)this + 0x10);
    unsigned int c2 = *(unsigned int*)((char*)this + 8);
    if (c2 <= idx)
        idx -= c2;

    int* arr = *(int**)((char*)this + 4);
    if (arr[idx] == 0)
        arr[idx] = (int)sub_62FEF6(0xc);

    sub_4497A0((void*)arr[idx], a);
    *(unsigned int*)((char*)this + 0x10) += 1;
}
