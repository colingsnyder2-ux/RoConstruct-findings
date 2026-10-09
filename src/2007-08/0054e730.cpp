// from server: 27% by colin
// roc 2007-08 0054e730  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054e730
//
// 0054e730  64a100000000         mov eax, dword ptr fs:[0]
// 0054e736  6aff                 push -1
// 0054e738  68d1267500           push 0x7526d1
// 0054e73d  50                   push eax
// 0054e73e  64892500000000       mov dword ptr fs:[0], esp
// 0054e745  83ec08               sub esp, 8
// 0054e748  56                   push esi
// 0054e749  8bf1                 mov esi, ecx
// 0054e74b  807e4800             cmp byte ptr [esi + 0x48], 0
// 0054e74f  7409                 je 0x54e75a
// 0054e751  e80ad2ffff           call 0x54b960
// 0054e756  c6464800             mov byte ptr [esi + 0x48], 0
// 0054e75a  89742404             mov dword ptr [esp + 4], esi
// 0054e75e  89742408             mov dword ptr [esp + 8], esi
// 0054e762  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0054e766  50                   push eax
// 0054e767  8bce                 mov ecx, esi
// 0054e769  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0054e771  e83aebffff           call 0x54d2b0
// 0054e776  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054e77a  c6464801             mov byte ptr [esi + 0x48], 1
// 0054e77e  5e                   pop esi
// 0054e77f  64890d00000000       mov dword ptr fs:[0], ecx
// 0054e786  83c414               add esp, 0x14
// 0054e789  c20400               ret 4

struct S {
    char pad[0x48];
    bool flag48;
    void sub_54b960();
    void sub_54d2b0(int);
    void f(int);
};

void S::f(int a) {
    if (flag48) {
        sub_54b960();
        flag48 = false;
    }
    sub_54d2b0(a);
    flag48 = true;
}
