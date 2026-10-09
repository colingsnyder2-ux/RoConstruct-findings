// from server: 67% by colin
// roc 2007-08 00491430  unit: RBX::Network::VPlayer::?$SignalDesc  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00491430
//
// 00491430  53                   push ebx
// 00491431  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00491435  56                   push esi
// 00491436  57                   push edi
// 00491437  8bf1                 mov esi, ecx
// 00491439  8dbe3c010000         lea edi, [esi + 0x13c]
// 0049143f  57                   push edi
// 00491440  53                   push ebx
// 00491441  ff1530e67700         call dword ptr [0x77e630]
// 00491447  83c408               add esp, 8
// 0049144a  84c0                 test al, al
// 0049144c  742b                 je 0x491479
// 0049144e  53                   push ebx
// 0049144f  8bcf                 mov ecx, edi
// 00491451  ff1590e67700         call dword ptr [0x77e690]
// 00491457  6a00                 push 0
// 00491459  56                   push esi
// 0049145a  e891010000           call 0x4915f0
// 0049145f  83c408               add esp, 8
// 00491462  84c0                 test al, al
// 00491464  7407                 je 0x49146d
// 00491466  8bce                 mov ecx, esi
// 00491468  e8f3f6ffff           call 0x490b60
// 0049146d  6820df8b00           push 0x8bdf20
// 00491472  8bce                 mov ecx, esi
// 00491474  e89732fbff           call 0x444710
// 00491479  5f                   pop edi
// 0049147a  5e                   pop esi
// 0049147b  5b                   pop ebx
// 0049147c  c20400               ret 4

struct VPlayerSignalDesc {
    char pad[0x13c];
    void* field_13c;
    void m(void*);
};

extern "C" int __stdcall sub_77e630(void*, void*);
extern "C" void* __stdcall sub_77e690(void*, void*);
extern "C" int __stdcall sub_4915f0(void*, void*);
extern "C" void sub_490b60();
extern "C" void sub_444710(void*, void*);

void VPlayerSignalDesc::m(void* arg)
{
    if (sub_77e630(&field_13c, arg)) {
        sub_77e690(&field_13c, arg);
        if (sub_4915f0(this, 0)) {
            sub_490b60();
        }
        sub_444710(this, (void*)0x8bdf20);
    }
}
