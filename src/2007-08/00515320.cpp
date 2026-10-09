// from server: 72% by colin
// roc 2007-08 00515320  unit: G3D::_internal::DialogTemplate  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00515320
//
// 00515320  8b442408             mov eax, dword ptr [esp + 8]
// 00515324  56                   push esi
// 00515325  8b742408             mov esi, dword ptr [esp + 8]
// 00515329  6aff                 push -1
// 0051532b  68ff7f0000           push 0x7fff
// 00515330  50                   push eax
// 00515331  56                   push esi
// 00515332  e839fcffff           call 0x514f70
// 00515337  83c410               add esp, 0x10
// 0051533a  83be2002000000       cmp dword ptr [esi + 0x220], 0
// 00515341  7424                 je 0x515367
// 00515343  8b8e24020000         mov ecx, dword ptr [esi + 0x224]
// 00515349  51                   push ecx
// 0051534a  56                   push esi
// 0051534b  e880990000           call 0x51ecd0
// 00515350  83c408               add esp, 8
// 00515353  c7862402000000000000 mov dword ptr [esi + 0x224], 0
// 0051535d  c7862002000000000000 mov dword ptr [esi + 0x220], 0
// 00515367  8d54240c             lea edx, [esp + 0xc]
// 0051536b  6820010000           push 0x120
// 00515370  52                   push edx
// 00515371  e8bafbffff           call 0x514f30
// 00515376  83c408               add esp, 8
// 00515379  5e                   pop esi
// 0051537a  c3                   ret 

struct DialogTemplate {
    char pad[0x220];
    int field220;
    int field224;
    void sub_514F70(int, int, int, int);
    void sub_51ECD0(int);
    void sub_514F30(int*, int);
    void sub_515320(int, int);
};

void DialogTemplate::sub_515320(int a, int b) {
    sub_514F70(a, b, 0x7fff, -1);
    if (field220 != 0) {
        sub_51ECD0(field224);
        field224 = 0;
        field220 = 0;
    }
    int local;
    sub_514F30(&local, 0x120);
}
