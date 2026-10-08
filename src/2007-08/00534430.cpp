// from server: 95% by colin
// roc 2007-08 00534430  unit: RBX::ScriptContext  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00534430
//
// 00534430  56                   push esi
// 00534431  8b742408             mov esi, dword ptr [esp + 8]
// 00534435  57                   push edi
// 00534436  6a00                 push 0
// 00534438  6a02                 push 2
// 0053443a  56                   push esi
// 0053443b  e810af0800           call 0x5bf350
// 00534440  8bf8                 mov edi, eax
// 00534442  a12cbc8a00           mov eax, dword ptr [0x8abc2c]
// 00534447  50                   push eax
// 00534448  6a01                 push 1
// 0053444a  56                   push esi
// 0053444b  e8f0ad0800           call 0x5bf240
// 00534450  56                   push esi
// 00534451  57                   push edi
// 00534452  50                   push eax
// 00534453  e868c60800           call 0x5c0ac0
// 00534458  83c424               add esp, 0x24
// 0053445b  5f                   pop edi
// 0053445c  33c0                 xor eax, eax
// 0053445e  5e                   pop esi
// 0053445f  c3                   ret 

extern "C" int __cdecl sub_5BF350(int, int, int);
extern "C" int __cdecl sub_5BF240(int, int, int);
extern "C" int __cdecl sub_5C0AC0(int, int, int);

extern int dword_8ABC2C;

struct RBX_ScriptContext {
    int method(int arg);
};

int RBX_ScriptContext::method(int arg)
{
    int a = sub_5BF350(arg, 2, 0);
    int b = sub_5BF240(arg, 1, dword_8ABC2C);
    sub_5C0AC0(b, a, arg);
    return 0;
}
