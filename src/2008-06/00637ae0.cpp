// from server: 100% by atomic.potato
// roc 2008-06 00637ae0  unit: RBX::VBrickColor::V?$Value::?$DescribedCreatable  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00637ae0
//
// 00637ae0  e8ebedffff           call 0x6368d0
// 00637ae5  e866f0ffff           call 0x636b50
// 00637aea  e821efffff           call 0x636a10
// 00637aef  e89cf1ffff           call 0x636c90
// 00637af4  e8d7f2ffff           call 0x636dd0
// 00637af9  e812f4ffff           call 0x636f10
// 00637afe  e84df5ffff           call 0x637050
// 00637b03  e888f6ffff           call 0x637190
// 00637b08  e953b1f8ff           jmp 0x5c2c60

extern "C" void __cdecl f6368d0();
extern "C" void __cdecl f636b50();
extern "C" void __cdecl f636a10();
extern "C" void __cdecl f636c90();
extern "C" void __cdecl f636dd0();
extern "C" void __cdecl f636f10();
extern "C" void __cdecl f637050();
extern "C" void __cdecl f637190();
extern "C" void __cdecl f5c2c60();

void f637ae0()
{
    f6368d0();
    f636b50();
    f636a10();
    f636c90();
    f636dd0();
    f636f10();
    f637050();
    f637190();
    f5c2c60();
}
