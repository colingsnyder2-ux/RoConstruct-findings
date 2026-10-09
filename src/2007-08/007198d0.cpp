// from server: 66% by colin
// roc 2007-08 007198d0  unit: CXTPRibbonGroupControlPopup  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007198d0
//
// 007198d0  8b442404             mov eax, dword ptr [esp + 4]
// 007198d4  85c0                 test eax, eax
// 007198d6  57                   push edi
// 007198d7  8bf9                 mov edi, ecx
// 007198d9  7c3f                 jl 0x71991a
// 007198db  3b474c               cmp eax, dword ptr [edi + 0x4c]
// 007198de  7d3a                 jge 0x71991a
// 007198e0  3b474c               cmp eax, dword ptr [edi + 0x4c]
// 007198e3  8d4f44               lea ecx, [edi + 0x44]
// 007198e6  7d36                 jge 0x71991e
// 007198e8  8b5104               mov edx, dword ptr [ecx + 4]
// 007198eb  56                   push esi
// 007198ec  8b3482               mov esi, dword ptr [edx + eax*4]
// 007198ef  6a01                 push 1
// 007198f1  50                   push eax
// 007198f2  c7865401000000000000 mov dword ptr [esi + 0x154], 0
// 007198fc  e8af8dfbff           call 0x6d26b0
// 00719901  8b475c               mov eax, dword ptr [edi + 0x5c]
// 00719904  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 0071990a  8b11                 mov edx, dword ptr [ecx]
// 0071990c  8b4258               mov eax, dword ptr [edx + 0x58]
// 0071990f  56                   push esi
// 00719910  ffd0                 call eax
// 00719912  8bce                 mov ecx, esi
// 00719914  e8cb68f1ff           call 0x6301e4
// 00719919  5e                   pop esi
// 0071991a  5f                   pop edi
// 0071991b  c20400               ret 4
// 0071991e  e8fd65f1ff           call 0x62ff20

struct CXTPRibbonGroupControlPopup {
    char pad[0x44];
    int m_nCount;
    char pad2[0x14];
    void* m_pRibbon;
    void SetCurSel(int nIndex);
};

extern "C" void __stdcall sub_6D26B0(int, int);
extern "C" void __fastcall sub_6301E4(void*);
extern "C" void __fastcall sub_62FF20(void*);

void CXTPRibbonGroupControlPopup::SetCurSel(int nIndex)
{
    if (nIndex < 0 || nIndex >= m_nCount)
        return;

    if (nIndex >= m_nCount) {
        sub_62FF20((char*)this + 0x44);
        return;
    }

    int* arr = *(int**)((char*)this + 0x48);
    void* item = (void*)arr[nIndex];

    *(int*)((char*)item + 0x154) = 0;
    sub_6D26B0(nIndex, 1);

    void* p = *(void**)((char*)this + 0x5c);
    void* p2 = *(void**)((char*)p + 0xf8);
    void* vtbl = *(void**)p2;
    void (*fn)(void*) = *(void (**)(void*))((char*)vtbl + 0x58);
    fn(item);

    sub_6301E4(item);
}
