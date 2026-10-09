// from server: 48% by colin
// roc 2007-08 00552120  unit: std::D::V?$allocator::U?$basic_zlib_decompressor::?$stream_buffer  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00552120
//
// 00552120  83ec30               sub esp, 0x30
// 00552123  6a01                 push 1
// 00552125  8d442438             lea eax, [esp + 0x38]
// 00552129  50                   push eax
// 0055212a  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0055212e  8d4810               lea ecx, [eax + 0x10]
// 00552131  51                   push ecx
// 00552132  83c008               add eax, 8
// 00552135  50                   push eax
// 00552136  e8f5c8ffff           call 0x54ea30
// 0055213b  83c410               add esp, 0x10
// 0055213e  83f801               cmp eax, 1
// 00552141  750f                 jne 0x552152
// 00552143  0fb6442434           movzx eax, byte ptr [esp + 0x34]
// 00552148  83f8ff               cmp eax, -1
// 0055214b  7405                 je 0x552152
// 0055214d  83f8fe               cmp eax, -2
// 00552150  751d                 jne 0x55216f
// 00552152  8b542438             mov edx, dword ptr [esp + 0x38]
// 00552156  52                   push edx
// 00552157  8d4c2404             lea ecx, [esp + 4]
// 0055215b  e830bfffff           call 0x54e090
// 00552160  6814a48500           push 0x85a414
// 00552165  8d442404             lea eax, [esp + 4]
// 00552169  50                   push eax
// 0055216a  e82fea0d00           call 0x630b9e
// 0055216f  83c430               add esp, 0x30
// 00552172  c3                   ret 

struct S
{
    char pad[8];
    int field8;
    int fieldC;
    int field10;
    char pad14[0x20];
    unsigned char field34;
    char pad35[3];
    int field38;
    void f();
};

extern "C" int __stdcall sub_54EA30(int, int, int, int);
extern "C" int __stdcall sub_54E090(int);
extern "C" int __cdecl sub_630B9E(void*, void*);

void S::f()
{
    char buf[0x30];
    int result;
    result = sub_54EA30(field8, field10, (int)buf, 1);
    if (result == 1)
    {
        unsigned char v = field34;
        if (v != 0xFF && v != 0xFE)
        {
            return;
        }
    }
    sub_54E090(field38);
    sub_630B9E((void*)0x85A414, buf);
}
