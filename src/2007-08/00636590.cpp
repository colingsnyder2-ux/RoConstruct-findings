// from server: 87% by colin
// roc 2007-08 00636590  unit: CXTPControlComboBoxList  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00636590
//
// 00636590  8b442404             mov eax, dword ptr [esp + 4]
// 00636594  6a00                 push 0
// 00636596  50                   push eax
// 00636597  6897010000           push 0x197
// 0063659c  e8ef8a0600           call 0x69f090
// 006365a1  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006365a4  51                   push ecx
// 006365a5  ff15d8ec7700         call dword ptr [0x77ecd8]
// 006365ab  c20400               ret 4

extern "C" void* __stdcall G1_func_0069f090(unsigned int, unsigned int, unsigned int);
extern "C" long (__stdcall *SendMessageA)(void*, unsigned int, unsigned int, long);

struct CXTPControlComboBoxList
{
    void SetCurSel(unsigned int index);
};

void CXTPControlComboBoxList::SetCurSel(unsigned int index)
{
    void* p = G1_func_0069f090(0x197, index, 0);
    SendMessageA(*(void**)((char*)p + 0x20), 0, 0, 0);
}
