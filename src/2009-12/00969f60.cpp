// from server: 100% by colin
// roc 2009-12 00969f60  unit: seg_00960000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00969f60
//
// 00969f60  68d0269b00           push 0x9b26d0
// 00969f65  b9b0cbb700           mov ecx, 0xb7cbb0
// 00969f6a  ff15f4b69800         call dword ptr [0x98b6f4]
// 00969f70  68c0ed9700           push 0x97edc0
// 00969f75  e8afa9e8ff           call 0x7f4929
// 00969f7a  59                   pop ecx
// 00969f7b  c3                   ret 

// from server: 99% by atomic.potato
extern "C" void (__thiscall *func_0098b6f4)(void*, const char*);
extern "C" void __cdecl func_007f4929(const char*);

void func_00969f60()
{
    func_0098b6f4((void*)0x00b7cbb0, "q0adorn");
    func_007f4929((const char*)0x0097edc0);
}