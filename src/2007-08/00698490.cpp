// from server: 88% by colin
// roc 2007-08 00698490  unit: CXTPPropertyGridItem  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00698490
//
// 00698490  56                   push esi
// 00698491  8bf1                 mov esi, ecx
// 00698493  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 00698499  85c0                 test eax, eax
// 0069849b  742d                 je 0x6984ca
// 0069849d  83be9400000000       cmp dword ptr [esi + 0x94], 0
// 006984a4  7424                 je 0x6984ca
// 006984a6  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 006984ac  8b5020               mov edx, dword ptr [eax + 0x20]
// 006984af  6a00                 push 0
// 006984b1  51                   push ecx
// 006984b2  6886010000           push 0x186
// 006984b7  52                   push edx
// 006984b8  ff15d8ec7700         call dword ptr [0x77ecd8]
// 006984be  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 006984c4  5e                   pop esi
// 006984c5  e9163d0000           jmp 0x69c1e0
// 006984ca  5e                   pop esi
// 006984cb  c3                   ret 

extern "C" __declspec(dllimport) long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct CXTPPropertyGridItem {
    char pad0[0x80];
    void* field80;
    char pad84[0x10];
    void* field94;
    char pad98[0x1c];
    void* fieldb4;
    void OnValueChanged();
};

void CXTPPropertyGridItem::OnValueChanged()
{
    if (fieldb4 != 0 && field94 != 0)
    {
        SendMessageA(*(void**)((char*)fieldb4 + 0x20), 0x186, (unsigned int)field80, 0);
        fieldb4 = 0;
    }
}
