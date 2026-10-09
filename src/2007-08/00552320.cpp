// from server: 35% by colin
// roc 2007-08 00552320  unit: std::D::V?$allocator::U?$basic_zlib_decompressor::?$stream_buffer  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00552320
//
// 00552320  55                   push ebp
// 00552321  8bec                 mov ebp, esp
// 00552323  6aff                 push -1
// 00552325  68f02b7500           push 0x752bf0
// 0055232a  64a100000000         mov eax, dword ptr fs:[0]
// 00552330  50                   push eax
// 00552331  64892500000000       mov dword ptr fs:[0], esp
// 00552338  51                   push ecx
// 00552339  53                   push ebx
// 0055233a  56                   push esi
// 0055233b  57                   push edi
// 0055233c  8b7d08               mov edi, dword ptr [ebp + 8]
// 0055233f  8965f0               mov dword ptr [ebp - 0x10], esp
// 00552342  57                   push edi
// 00552343  8bf1                 mov esi, ecx
// 00552345  e8b6b8ffff           call 0x54dc00
// 0055234a  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0055234d  57                   push edi
// 0055234e  8d4d08               lea ecx, [ebp + 8]
// 00552351  51                   push ecx
// 00552352  8d4e40               lea ecx, [esi + 0x40]
// 00552355  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0055235c  894508               mov dword ptr [ebp + 8], eax
// 0055235f  e8bcc4ffff           call 0x54e820

struct S_00552320 {
    char pad[0x40];
    int field_40;
    char pad2[0x8];
    int field_4c;
    void sub_54dc00(int);
    void sub_54e820(int*, int);
    void func(int);
};

void S_00552320::func(int arg)
{
    sub_54dc00(arg);
    int tmp = field_4c;
    int local = tmp;
    sub_54e820(&local, arg);
}
