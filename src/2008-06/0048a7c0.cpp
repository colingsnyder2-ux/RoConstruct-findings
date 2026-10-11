// from server: 47% by colin
// roc 2008-06 0048a7c0  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048a7c0
//
// 0048a7c0  8b442404             mov eax, dword ptr [esp + 4]
// 0048a7c4  53                   push ebx
// 0048a7c5  55                   push ebp
// 0048a7c6  56                   push esi
// 0048a7c7  8bf1                 mov esi, ecx
// 0048a7c9  8b5e04               mov ebx, dword ptr [esi + 4]
// 0048a7cc  894604               mov dword ptr [esi + 4], eax
// 0048a7cf  f60594fb960001       test byte ptr [0x96fb94], 1
// 0048a7d6  7514                 jne 0x48a7ec
// 0048a7d8  830d94fb960001       or dword ptr [0x96fb94], 1
// 0048a7df  bd0a000000           mov ebp, 0xa
// 0048a7e4  892d90fb9600         mov dword ptr [0x96fb90], ebp
// 0048a7ea  eb06                 jmp 0x48a7f2
// 0048a7ec  8b2d90fb9600         mov ebp, dword ptr [0x96fb90]
// 0048a7f2  8b4e08               mov ecx, dword ptr [esi + 8]
// 0048a7f5  57                   push edi
// 0048a7f6  8b7e04               mov edi, dword ptr [esi + 4]
// 0048a7f9  3bf9                 cmp edi, ecx
// 0048a7fb  7e65                 jle 0x48a862
// 0048a7fd  85c9                 test ecx, ecx
// 0048a7ff  7506                 jne 0x48a807
// 0048a801  894608               mov dword ptr [esi + 8], eax
// 0048a804  53                   push ebx
// 0048a805  eb7f                 jmp 0x48a886
// 0048a807  3bfd                 cmp edi, ebp
// 0048a809  7d06                 jge 0x48a811
// 0048a80b  896e08               mov dword ptr [esi + 8], ebp
// 0048a80e  53                   push ebx
// 0048a80f  eb75                 jmp 0x48a886
// 0048a811  d90580e38100         fld dword ptr [0x81e380]
// 0048a817  8bc1                 mov eax, ecx
// 0048a819  c1e004               shl eax, 4
// 0048a81c  3d801a0600           cmp eax, 0x61a80
// 0048a821  760a                 jbe 0x48a82d
// 0048a823  ddd8                 fstp st(0)
// 0048a825  d9057ce38100         fld dword ptr [0x81e37c]
// 0048a82b  eb0f                 jmp 0x48a83c
// 0048a82d  3d00fa0000           cmp eax, 0xfa00
// 0048a832  7608                 jbe 0x48a83c
// 0048a834  ddd8                 fstp st(0)
// 0048a836  d90534c48100         fld dword ptr [0x81c434]
// 0048a83c  8be9                 mov ebp, ecx
// 0048a83e  896c2418             mov dword ptr [esp + 0x18], ebp
// 0048a842  da4c2418             fimul dword ptr [esp + 0x18]
// 0048a846  e8a56f2100           call 0x6a17f0
// 0048a84b  2bc5                 sub eax, ebp
// 0048a84d  03c7                 add eax, edi
// 0048a84f  894608               mov dword ptr [esi + 8], eax
// 0048a852  8b0d90fb9600         mov ecx, dword ptr [0x96fb90]
// 0048a858  3bc1                 cmp eax, ecx
// 0048a85a  7d03                 jge 0x48a85f
// 0048a85c  894e08               mov dword ptr [esi + 8], ecx
// 0048a85f  53                   push ebx
// 0048a860  eb24                 jmp 0x48a886
// 0048a862  b856555555           mov eax, 0x55555556
// 0048a867  f7e9                 imul ecx
// 0048a869  8bc2                 mov eax, edx
// 0048a86b  c1e81f               shr eax, 0x1f
// 0048a86e  03c2                 add eax, edx
// 0048a870  3bf8                 cmp edi, eax
// 0048a872  7f19                 jg 0x48a88d
// 0048a874  807c241800           cmp byte ptr [esp + 0x18], 0
// 0048a879  7412                 je 0x48a88d
// 0048a87b  3bfd                 cmp edi, ebp
// 0048a87d  7e0e                 jle 0x48a88d
// 0048a87f  3bfb                 cmp edi, ebx
// 0048a881  7c02                 jl 0x48a885
// 0048a883  8bfb                 mov edi, ebx
// 0048a885  57                   push edi
// 0048a886  8bce                 mov ecx, esi
// 0048a888  e813f2ffff           call 0x489aa0
// 0048a88d  3b5e04               cmp ebx, dword ptr [esi + 4]
// 0048a890  8bcb                 mov ecx, ebx
// 0048a892  5f                   pop edi
// 0048a893  7d23                 jge 0x48a8b8
// 0048a895  d9ee                 fldz 
// 0048a897  c1e304               shl ebx, 4
// 0048a89a  8bd3                 mov edx, ebx
// 0048a89c  8b06                 mov eax, dword ptr [esi]
// 0048a89e  03c2                 add eax, edx
// 0048a8a0  740b                 je 0x48a8ad
// 0048a8a2  d910                 fst dword ptr [eax]
// 0048a8a4  d95004               fst dword ptr [eax + 4]
// 0048a8a7  d95008               fst dword ptr [eax + 8]
// 0048a8aa  d9500c               fst dword ptr [eax + 0xc]
// 0048a8ad  41                   inc ecx
// 0048a8ae  83c210               add edx, 0x10
// 0048a8b1  3b4e04               cmp ecx, dword ptr [esi + 4]
// 0048a8b4  7ce6                 jl 0x48a89c
// 0048a8b6  ddd8                 fstp st(0)
// 0048a8b8  5e                   pop esi
// 0048a8b9  5d                   pop ebp
// 0048a8ba  5b                   pop ebx
// 0048a8bb  c20800               ret 8

extern "C" int __cdecl func_006a17f0(float);

struct VPlayer {
    int field0;
    int field4;
    int field8;
    void func_00489aa0(int);
    void func_0048a7c0(int, int);
};

void VPlayer::func_0048a7c0(int a, int b)
{
    int old = field4;
    field4 = a;

    static int s_96fb90;
    static int s_96fb94;
    int ebp;
    if ((s_96fb94 & 1) == 0) {
        s_96fb94 |= 1;
        ebp = 10;
        s_96fb90 = ebp;
    } else {
        ebp = s_96fb90;
    }

    int ecx = field8;
    int edi = field4;
    if (edi > ecx) {
        if (ecx == 0) {
            field8 = a;
            func_00489aa0(old);
        } else if (edi < ebp) {
            field8 = ebp;
            func_00489aa0(old);
        } else {
            float f;
            unsigned int size = (unsigned int)ecx << 4;
            if (size > 0x61a80) {
                f = *(float*)0x81e37c;
            } else if (size > 0xfa00) {
                f = *(float*)0x81c434;
            } else {
                f = *(float*)0x81e380;
            }
            int tmp = ecx;
            int scaled = func_006a17f0(f * (float)tmp);
            int result = scaled - tmp + edi;
            field8 = result;
            int limit = s_96fb90;
            if (result < limit) {
                field8 = limit;
            }
            func_00489aa0(old);
        }
    } else {
        int q = ecx / 3;
        if (edi > q) {
            if (*(unsigned char*)&a != 0 && edi > ebp) {
                if (edi >= old) {
                    edi = old;
                }
                func_00489aa0(edi);
            }
        }
    }

    if (old < field4) {
        int i = old;
        int offset = old << 4;
        while (i < field4) {
            float* p = (float*)((char*)this + offset);
            if (p != 0) {
                p[0] = 0.0f;
                p[1] = 0.0f;
                p[2] = 0.0f;
                p[3] = 0.0f;
            }
            i++;
            offset += 16;
        }
    }
}
