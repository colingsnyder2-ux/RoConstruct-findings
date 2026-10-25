// from server: 77% by atomic.potato
// roc 2010-06 006ba010  unit: RBX::VTextureId::?$TypedPropertyDescriptor  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006ba010
//
// 006ba010  8b442408             mov eax, dword ptr [esp + 8]
// 006ba014  83ec28               sub esp, 0x28
// 006ba017  50                   push eax
// 006ba018  8d4c2404             lea ecx, [esp + 4]
// 006ba01c  68402ba400           push 0xa42b40
// 006ba021  51                   push ecx
// 006ba022  e879b70d00           call 0x7957a0
// 006ba027  83c40c               add esp, 0xc
// 006ba02a  687430b000           push 0xb03074
// 006ba02f  8d542404             lea edx, [esp + 4]
// 006ba033  52                   push edx
// 006ba034  e879e90e00           call 0x7a89b2

extern "C" int __cdecl sub_7957A0(char* dst, const char* fmt, const char* arg);
extern "C" int __cdecl sub_7A89B2(char* dst, const char* src);

struct S {
    char f(int a, int b);
};

char S::f(int a, int b) {
    char buf[40];
    sub_7957A0(buf, (const char*)0xA42B40, (const char*)b);
    return (char)sub_7A89B2(buf, (const char*)0xB03074);
}
