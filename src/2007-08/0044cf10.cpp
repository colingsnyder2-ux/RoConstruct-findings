// from server: 38% by colin
// roc 2007-08 0044cf10  unit: CRobloxDHtmlDialog  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044cf10
//
// 0044cf10  6aff                 push -1
// 0044cf12  68c9e67300           push 0x73e6c9
// 0044cf17  64a100000000         mov eax, dword ptr fs:[0]
// 0044cf1d  50                   push eax
// 0044cf1e  51                   push ecx
// 0044cf1f  56                   push esi
// 0044cf20  a188518b00           mov eax, dword ptr [0x8b5188]
// 0044cf25  33c4                 xor eax, esp
// 0044cf27  50                   push eax
// 0044cf28  8d44240c             lea eax, [esp + 0xc]
// 0044cf2c  64a300000000         mov dword ptr fs:[0], eax
// 0044cf32  8bf1                 mov esi, ecx
// 0044cf34  89742408             mov dword ptr [esp + 8], esi
// 0044cf38  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0044cf3c  50                   push eax
// 0044cf3d  ff159ce67700         call dword ptr [0x77e69c]
// 0044cf43  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0044cf4b  e8e0fb0d00           call 0x52cb30
// 0044cf50  89461c               mov dword ptr [esi + 0x1c], eax
// 0044cf53  8bc6                 mov eax, esi
// 0044cf55  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044cf59  64890d00000000       mov dword ptr fs:[0], ecx
// 0044cf60  59                   pop ecx
// 0044cf61  5e                   pop esi
// 0044cf62  83c410               add esp, 0x10
// 0044cf65  c20400               ret 4

struct CRobloxDHtmlDialog {
    char pad[0x1c];
    void* field_1c;
    CRobloxDHtmlDialog(const CRobloxDHtmlDialog& other);
};

extern "C" void* __stdcall sub_52cb30();
extern "C" void __stdcall sub_77e69c(void*);

CRobloxDHtmlDialog::CRobloxDHtmlDialog(const CRobloxDHtmlDialog& other)
{
    sub_77e69c(*(void**)((char*)&other + 0x1c));
    this->field_1c = sub_52cb30();
}
