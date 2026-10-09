// from server: 72% by colin
// roc 2007-08 00530d90  unit: RBX::ModelInstance  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00530d90
//
// 00530d90  8b8164ffffff         mov eax, dword ptr [ecx - 0x9c]
// 00530d96  56                   push esi
// 00530d97  6a00                 push 0
// 00530d99  68c08f8900           push 0x898fc0
// 00530d9e  8db1a8feffff         lea esi, [ecx - 0x158]
// 00530da4  684c1f8800           push 0x881f4c
// 00530da9  6a00                 push 0
// 00530dab  50                   push eax
// 00530dac  e885ff0f00           call 0x630d36
// 00530db1  83c414               add esp, 0x14
// 00530db4  85c0                 test eax, eax
// 00530db6  7413                 je 0x530dcb
// 00530db8  57                   push edi
// 00530db9  8bbebc000000         mov edi, dword ptr [esi + 0xbc]
// 00530dbf  8bce                 mov ecx, esi
// 00530dc1  e86af1ffff           call 0x52ff30
// 00530dc6  3bc7                 cmp eax, edi
// 00530dc8  5f                   pop edi
// 00530dc9  7510                 jne 0x530ddb
// 00530dcb  803d090e8c0000       cmp byte ptr [0x8c0e09], 0
// 00530dd2  7407                 je 0x530ddb
// 00530dd4  b801000000           mov eax, 1
// 00530dd9  5e                   pop esi
// 00530dda  c3                   ret 
// 00530ddb  33c0                 xor eax, eax
// 00530ddd  5e                   pop esi
// 00530dde  c3                   ret 

struct ModelInstance {
    char pad[0x9c];
    int field_9c;
    char pad2[0xbc - 0x9c - 4];
    int field_bc;
    int method_52ff30();

    int method_530d90();
};

extern "C" int __cdecl func_630d36(int a, int b, int c, int d, int e);

extern unsigned char byte_8c0e09;

int ModelInstance::method_530d90()
{
    int v = func_630d36(field_9c, 0, 0x881f4c, 0x898fc0, 0);
    if (v != 0) {
        int x = field_bc;
        if (method_52ff30() != x)
            goto label_dd;
    }
    if (byte_8c0e09 != 0)
        return 1;
label_dd:
    return 0;
}
