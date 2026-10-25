// from server: 100% by atomic.potato
// roc 2008-06 007f3ef0  unit: seg_007f0000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3ef0
//
// 007f3ef0  56                   push esi
// 007f3ef1  33f6                 xor esi, esi
// 007f3ef3  56                   push esi
// 007f3ef4  683c108300           push 0x83103c
// 007f3ef9  6848108300           push 0x831048
// 007f3efe  83ec0c               sub esp, 0xc
// 007f3f01  8bc4                 mov eax, esp
// 007f3f03  b960896000           mov ecx, 0x608960
// 007f3f08  8908                 mov dword ptr [eax], ecx
// 007f3f0a  33d2                 xor edx, edx
// 007f3f0c  895004               mov dword ptr [eax + 4], edx
// 007f3f0f  b9b8549700           mov ecx, 0x9754b8
// 007f3f14  897008               mov dword ptr [eax + 8], esi
// 007f3f17  e8641ad9ff           call 0x585980
// 007f3f1c  68d0d77f00           push 0x7fd7d0
// 007f3f21  e889d8eaff           call 0x6a17af
// 007f3f26  83c404               add esp, 4
// 007f3f29  5e                   pop esi
// 007f3f2a  c3                   ret 

struct A_func_007f3ef0 { int a; int b; int c; };
struct T_func_007f3ef0 { void m(A_func_007f3ef0 st, int p1, int p2, int p3); };
extern "C" int __cdecl func_6a17af(void (__cdecl*)(void));
extern T_func_007f3ef0 G_func_007f3ef0_obj;

static void __cdecl dtor_func_007f3ef0(void) {}

void func_007f3ef0(void)
{
    A_func_007f3ef0 st;
    st.a = 0x608960;
    st.b = 0;
    st.c = 0;
    G_func_007f3ef0_obj.m(st, 0x831048, 0x83103c, 0);
    func_6a17af(&dtor_func_007f3ef0);
}
