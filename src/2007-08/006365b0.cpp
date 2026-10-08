// from server: 90% by colin
// roc 2007-08 006365b0  unit: CXTPControlComboBoxList  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006365b0
//
// 006365b0  8b442404             mov eax, dword ptr [esp + 4]
// 006365b4  6a00                 push 0
// 006365b6  50                   push eax
// 006365b7  6886010000           push 0x186
// 006365bc  e8cf8a0600           call 0x69f090
// 006365c1  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006365c4  51                   push ecx
// 006365c5  ff15d8ec7700         call dword ptr [0x77ecd8]
// 006365cb  c20400               ret 4

extern "C" __declspec(dllimport) long __stdcall SendMessageA(void *);

extern "C" void *__stdcall sub_0069f090(unsigned int, unsigned int, unsigned int);

void __stdcall func_006365b0(void *p)
{
    void *w = sub_0069f090(0x186, (unsigned int)p, 0);
    SendMessageA(*(void **)((char *)w + 0x20));
}
