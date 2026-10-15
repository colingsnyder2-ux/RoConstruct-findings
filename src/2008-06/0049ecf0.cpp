// from server: 77% by colin
// roc 2008-06 0049ecf0  unit: RBX::VNetworkSettings::?$FactoryProduct::Creator  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049ecf0
//
// 0049ecf0  8b442404             mov eax, dword ptr [esp + 4]
// 0049ecf4  50                   push eax
// 0049ecf5  b9880b9700           mov ecx, 0x970b88
// 0049ecfa  ff154c248000         call dword ptr [0x80244c]
// 0049ed00  e82bfeffff           call 0x49eb30
// 0049ed05  e896feffff           call 0x49eba0
// 0049ed0a  e85126ffff           call 0x491360
// 0049ed0f  e88cbbffff           call 0x49a8a0
// 0049ed14  e8f7feffff           call 0x49ec10
// 0049ed19  e862ffffff           call 0x49ec80
// 0049ed1e  e96dfbffff           jmp 0x49e890

struct S {
    void __cdecl f(const char*);
    void sub_49EB30();
};


extern "C" void __stdcall sub_49EBA0();
extern "C" void __stdcall sub_491360();
extern "C" void __stdcall sub_49A8A0();
extern "C" void __stdcall sub_49EC10();
extern "C" void __stdcall sub_49EC80();
extern "C" void __stdcall sub_49E890();

extern "C" void* __stdcall sub_80244C();

void S::f(const char* s)
{
    sub_80244C();
    sub_49EB30();
    sub_49EBA0();
    sub_491360();
    sub_49A8A0();
    sub_49EC10();
    sub_49EC80();
    sub_49E890();
}
