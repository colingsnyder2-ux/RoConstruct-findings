// from server: 46% by colin
// roc 2007-08 00686940  unit: CXTPPropExchangeArchive  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00686940
//
// 00686940  6aff                 push -1
// 00686942  6838247600           push 0x762438
// 00686947  64a100000000         mov eax, dword ptr fs:[0]
// 0068694d  50                   push eax
// 0068694e  56                   push esi
// 0068694f  a188518b00           mov eax, dword ptr [0x8b5188]
// 00686954  33c4                 xor eax, esp
// 00686956  50                   push eax
// 00686957  8d442408             lea eax, [esp + 8]
// 0068695b  64a300000000         mov dword ptr fs:[0], eax
// 00686961  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00686965  8b01                 mov eax, dword ptr [ecx]
// 00686967  8b4058               mov eax, dword ptr [eax + 0x58]
// 0068696a  8d542424             lea edx, [esp + 0x24]
// 0068696e  52                   push edx
// 0068696f  8b542424             mov edx, dword ptr [esp + 0x24]
// 00686973  52                   push edx
// 00686974  8b542424             mov edx, dword ptr [esp + 0x24]
// 00686978  6a0c                 push 0xc
// 0068697a  52                   push edx
// 0068697b  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00686983  ffd0                 call eax
// 00686985  8d4c2424             lea ecx, [esp + 0x24]
// 00686989  51                   push ecx
// 0068698a  8bf0                 mov esi, eax
// 0068698c  ff15d8e97700         call dword ptr [0x77e9d8]
// 00686992  8bc6                 mov eax, esi
// 00686994  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00686998  64890d00000000       mov dword ptr fs:[0], ecx
// 0068699f  59                   pop ecx
// 006869a0  5e                   pop esi
// 006869a1  83c40c               add esp, 0xc
// 006869a4  c3                   ret 

extern "C" __declspec(dllimport) void __stdcall VariantClear(void*);

struct CXTPPropExchangeArchive {
    int GetArchive();
};

int CXTPPropExchangeArchive::GetArchive()
{
    void* pv = 0;
    int result = ((int (__thiscall*)(void*, int, int, int, void**))((*(void***)this)[0x58 / 4]))(this, 0xc, 0, 0, &pv);
    VariantClear(&pv);
    return result;
}
