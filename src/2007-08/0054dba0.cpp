// from server: 72% by colin
// roc 2007-08 0054dba0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054dba0
//
// 0054dba0  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0054dba3  8b4110               mov eax, dword ptr [ecx + 0x10]
// 0054dba6  8b12                 mov edx, dword ptr [edx]
// 0054dba8  83ec28               sub esp, 0x28
// 0054dbab  3b10                 cmp edx, dword ptr [eax]
// 0054dbad  742a                 je 0x54dbd9
// 0054dbaf  8b4130               mov eax, dword ptr [ecx + 0x30]
// 0054dbb2  830001               add dword ptr [eax], 1
// 0054dbb5  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0054dbb8  8300ff               add dword ptr [eax], -1
// 0054dbbb  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0054dbbf  83f8ff               cmp eax, -1
// 0054dbc2  740d                 je 0x54dbd1
// 0054dbc4  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0054dbc7  8b11                 mov edx, dword ptr [ecx]
// 0054dbc9  8802                 mov byte ptr [edx], al
// 0054dbcb  83c428               add esp, 0x28
// 0054dbce  c20400               ret 4
// 0054dbd1  33c0                 xor eax, eax
// 0054dbd3  83c428               add esp, 0x28
// 0054dbd6  c20400               ret 4
// 0054dbd9  8d0424               lea eax, [esp]
// 0054dbdc  50                   push eax
// 0054dbdd  e82ed7ffff           call 0x54b310
// 0054dbe2  83c404               add esp, 4
// 0054dbe5  68c49a8500           push 0x859ac4
// 0054dbea  8d4c2404             lea ecx, [esp + 4]
// 0054dbee  51                   push ecx
// 0054dbef  e8aa2f0e00           call 0x630b9e

extern "C" void __cdecl sub_54B310(void *);
extern "C" void __cdecl sub_630B9E(void *, const char *);

extern char byte_859AC4;

struct S {
    char pad[0x10];
    int *field_10;
    char pad2[0xC];
    int *field_20;
    char pad3[0xC];
    int *field_30;
    int f(int arg);
};

int S::f(int arg)
{
    int *p20 = field_20;
    int *p10 = field_10;
    if (*p20 != *p10) {
        int *p30 = field_30;
        *p30 += 1;
        int *q20 = field_20;
        *q20 -= 1;
        if (arg != -1) {
            int *r20 = field_20;
            char *dst = (char *)*r20;
            *dst = (char)arg;
            return arg;
        }
        return 0;
    }
    sub_54B310(&arg);
    sub_630B9E(&arg, &byte_859AC4);
    return arg;
}
