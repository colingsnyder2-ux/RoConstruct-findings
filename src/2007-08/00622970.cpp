// from server: 70% by colin
// roc 2007-08 00622970  unit: RBX::ScoreHud  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00622970
//
// 00622970  56                   push esi
// 00622971  8bf1                 mov esi, ecx
// 00622973  e878b4ffff           call 0x61ddf0
// 00622978  83f803               cmp eax, 3
// 0062297b  7737                 ja 0x6229b4
// 0062297d  ff2485b8296200       jmp dword ptr [eax*4 + 0x6229b8]
// 00622984  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00622988  6a02                 push 2
// 0062298a  51                   push ecx
// 0062298b  8bce                 mov ecx, esi
// 0062298d  e88ef5ffff           call 0x621f20
// 00622992  5e                   pop esi
// 00622993  c20400               ret 4
// 00622996  8b542408             mov edx, dword ptr [esp + 8]
// 0062299a  6a03                 push 3
// 0062299c  52                   push edx
// 0062299d  8bce                 mov ecx, esi
// 0062299f  e87cf5ffff           call 0x621f20
// 006229a4  5e                   pop esi
// 006229a5  c20400               ret 4
// 006229a8  8b442408             mov eax, dword ptr [esp + 8]
// 006229ac  50                   push eax
// 006229ad  8bce                 mov ecx, esi
// 006229af  e81ceeffff           call 0x6217d0
// 006229b4  5e                   pop esi
// 006229b5  c20400               ret 4
// 006229b8  a829                 test al, 0x29
// 006229ba  6200                 bound eax, qword ptr [eax]
// 006229bc  a829                 test al, 0x29
// 006229be  6200                 bound eax, qword ptr [eax]
// 006229c0  8429                 test byte ptr [ecx], ch
// 006229c2  6200                 bound eax, qword ptr [eax]
// 006229c4  96                   xchg esi, eax
// 006229c5  296200               sub dword ptr [edx], esp

struct ScoreHud {
    int sub_61DDF0();
    void sub_621F20(int, int);
    void sub_6217D0(int);
    void func(int);
};

void ScoreHud::func(int a) {
    int r = sub_61DDF0();
    switch (r) {
    case 0:
        sub_621F20(a, 2);
        break;
    case 1:
        sub_621F20(a, 3);
        break;
    case 2:
        sub_6217D0(a);
        break;
    case 3:
        sub_6217D0(a);
        break;
    }
}
