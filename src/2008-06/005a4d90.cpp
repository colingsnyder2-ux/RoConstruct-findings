// from server: 54% by colin
// from server: 53% by colin
// roc 2008-06 005a4d90  unit: RBX::VWorkspace::?$BoundFuncDesc  size: 1124 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a4d90
//
// 005a4d90  6aff                 push -1
// 005a4d92  68902e7d00           push 0x7d2e90
// 005a4d97  64a100000000         mov eax, dword ptr fs:[0]
// 005a4d9d  50                   push eax
// 005a4d9e  64892500000000       mov dword ptr fs:[0], esp
// 005a4da5  83ec28               sub esp, 0x28
// 005a4da8  53                   push ebx
// 005a4da9  33db                 xor ebx, ebx
// 005a4dab  56                   push esi
// 005a4dac  8bf1                 mov esi, ecx
// 005a4dae  8974240c             mov dword ptr [esp + 0xc], esi
// 005a4db2  895c2410             mov dword ptr [esp + 0x10], ebx
// 005a4db6  395c2444             cmp dword ptr [esp + 0x44], ebx
// 005a4dba  7414                 je 0x5a4dd0
// 005a4dbc  c78634010000983e8300 mov dword ptr [esi + 0x134], 0x833e98
// 005a4dc6  c7865804000044618400 mov dword ptr [esi + 0x458], 0x846144
// 005a4dd0  55                   push ebp
// 005a4dd1  57                   push edi
// 005a4dd2  53                   push ebx
// 005a4dd3  e8a8f4ffff           call 0x5a4280
// 005a4dd8  8dbeec020000         lea edi, [esi + 0x2ec]
// 005a4dde  53                   push ebx
// 005a4ddf  8bcf                 mov ecx, edi
// 005a4de1  895c2444             mov dword ptr [esp + 0x44], ebx
// 005a4de5  c786e802000048f88200 mov dword ptr [esi + 0x2e8], 0x82f848
// 005a4def  e86ce6fdff           call 0x583460
// 005a4df4  899e8c030000         mov dword ptr [esi + 0x38c], ebx
// 005a4dfa  899e90030000         mov dword ptr [esi + 0x390], ebx
// 005a4e00  899e88030000         mov dword ptr [esi + 0x388], ebx
// 005a4e06  899e98030000         mov dword ptr [esi + 0x398], ebx
// 005a4e0c  899e9c030000         mov dword ptr [esi + 0x39c], ebx
// 005a4e12  899e94030000         mov dword ptr [esi + 0x394], ebx
// 005a4e18  8dae14030000         lea ebp, [esi + 0x314]
// 005a4e1e  8bcd                 mov ecx, ebp
// 005a4e20  c644244003           mov byte ptr [esp + 0x40], 3
// 005a4e25  e896ff0600           call 0x614dc0
// 005a4e2a  8d8e44030000         lea ecx, [esi + 0x344]
// 005a4e30  c644244004           mov byte ptr [esp + 0x40], 4
// 005a4e35  e886500400           call 0x5e9ec0
// 005a4e3a  8d8e64030000         lea ecx, [esi + 0x364]
// 005a4e40  c644244005           mov byte ptr [esp + 0x40], 5
// 005a4e45  e876500400           call 0x5e9ec0
// 005a4e4a  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 005a4e50  c706543a8300         mov dword ptr [esi], 0x833a54
// 005a4e56  c74610443a8300       mov dword ptr [esi + 0x10], 0x833a44
// 005a4e5d  c746143c3a8300       mov dword ptr [esi + 0x14], 0x833a3c
// 005a4e64  c74620343a8300       mov dword ptr [esi + 0x20], 0x833a34
// 005a4e6b  c74624243a8300       mov dword ptr [esi + 0x24], 0x833a24
// 005a4e72  c74644143a8300       mov dword ptr [esi + 0x44], 0x833a14
// 005a4e79  c74664043a8300       mov dword ptr [esi + 0x64], 0x833a04
// 005a4e80  c78684000000f4398300 mov dword ptr [esi + 0x84], 0x8339f4
// 005a4e8a  c786a4000000e4398300 mov dword ptr [esi + 0xa4], 0x8339e4
// 005a4e94  c786c4000000d4398300 mov dword ptr [esi + 0xc4], 0x8339d4
// 005a4e9e  c78630010000c8398300 mov dword ptr [esi + 0x130], 0x8339c8
// 005a4ea8  c786a0010000b0398300 mov dword ptr [esi + 0x1a0], 0x8339b0
// 005a4eb2  c7868802000098398300 mov dword ptr [esi + 0x288], 0x833998
// 005a4ebc  c786e802000090398300 mov dword ptr [esi + 0x2e8], 0x833990
// 005a4ec6  c70788398300         mov dword ptr [edi], 0x833988
// 005a4ecc  c7450080398300       mov dword ptr [ebp], 0x833980
// 005a4ed3  c7864003000070398300 mov dword ptr [esi + 0x340], 0x833970
// 005a4edd  c7864403000060398300 mov dword ptr [esi + 0x344], 0x833960
// 005a4ee7  c7866403000050398300 mov dword ptr [esi + 0x364], 0x833950
// 005a4ef1  c7868403000044398300 mov dword ptr [esi + 0x384], 0x833944
// 005a4efb  8b4804               mov ecx, dword ptr [eax + 4]
// 005a4efe  c784313401000038398300 mov dword ptr [ecx + esi + 0x134], 0x833938
// 005a4f09  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 005a4f0f  8b4208               mov eax, dword ptr [edx + 8]
// 005a4f12  c784303401000030398300 mov dword ptr [eax + esi + 0x134], 0x833930
// 005a4f1d  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 005a4f23  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005a4f26  c784323401000014398300 mov dword ptr [edx + esi + 0x134], 0x833914
// 005a4f31  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 005a4f37  8b4004               mov eax, dword ptr [eax + 4]
// 005a4f3a  8d88f0fcffff         lea ecx, [eax - 0x310]
// 005a4f40  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 005a4f47  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 005a4f4d  8b4208               mov eax, dword ptr [edx + 8]
// 005a4f50  8d88e8fcffff         lea ecx, [eax - 0x318]
// 005a4f56  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 005a4f5d  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 005a4f63  8b420c               mov eax, dword ptr [edx + 0xc]
// 005a4f66  8d88e0fcffff         lea ecx, [eax - 0x320]
// 005a4f6c  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 005a4f73  899ea0030000         mov dword ptr [esi + 0x3a0], ebx
// 005a4f79  899ea4030000         mov dword ptr [esi + 0x3a4], ebx
// 005a4f7f  8b542448             mov edx, dword ptr [esp + 0x48]
// 005a4f83  8996a8030000         mov dword ptr [esi + 0x3a8], edx
// 005a4f89  889eac030000         mov byte ptr [esi + 0x3ac], bl
// 005a4f8f  899eb0030000         mov dword ptr [esi + 0x3b0], ebx
// 005a4f95  899eb4030000         mov dword ptr [esi + 0x3b4], ebx
// 005a4f9b  899eb8030000         mov dword ptr [esi + 0x3b8], ebx
// 005a4fa1  899ebc030000         mov dword ptr [esi + 0x3bc], ebx
// 005a4fa7  33c0                 xor eax, eax
// 005a4fa9  668986c0030000       mov word ptr [esi + 0x3c0], ax
// 005a4fb0  33c9                 xor ecx, ecx
// 005a4fb2  66898ec2030000       mov word ptr [esi + 0x3c2], cx
// 005a4fb9  668986c6030000       mov word ptr [esi + 0x3c6], ax
// 005a4fc0  33d2                 xor edx, edx
// 005a4fc2  668996c4030000       mov word ptr [esi + 0x3c4], dx
// 005a4fc9  668996ca030000       mov word ptr [esi + 0x3ca], dx
// 005a4fd0  8d44244c             lea eax, [esp + 0x4c]
// 005a4fd4  66898ec8030000       mov word ptr [esi + 0x3c8], cx
// 005a4fdb  50                   push eax
// 005a4fdc  8d542450             lea edx, [esp + 0x50]
// 005a4fe0  8d8ed4030000         lea ecx, [esi + 0x3d4]
// 005a4fe6  52                   push edx
// 005a4fe7  c644244809           mov byte ptr [esp + 0x48], 9
// 005a4fec  899ecc030000         mov dword ptr [esi + 0x3cc], ebx
// 005a4ff2  889ed0030000         mov byte ptr [esi + 0x3d0], bl
// 005a4ff8  e8a3620a00           call 0x64b2a0
// 005a4ffd  899ef4030000         mov dword ptr [esi + 0x3f4], ebx
// 005a5003  889ef8030000         mov byte ptr [esi + 0x3f8], bl
// 005a5009  899efc030000         mov dword ptr [esi + 0x3fc], ebx
// 005a500f  899e00040000         mov dword ptr [esi + 0x400], ebx
// 005a5015  8d8604040000         lea eax, [esi + 0x404]
// 005a501b  50                   push eax
// 005a501c  c64424440b           mov byte ptr [esp + 0x44], 0xb
// 005a5021  e81a8bebff           call 0x45db40
// 005a5026  d9ee                 fldz 
// 005a5028  dd9610040000         fst qword ptr [esi + 0x410]
// 005a502e  6848c00000           push 0xc048
// 005a5033  dd9618040000         fst qword ptr [esi + 0x418]
// 005a5039  c64424480c           mov byte ptr [esp + 0x48], 0xc
// 005a503e  dd9e20040000         fstp qword ptr [esi + 0x420]
// 005a5044  e8d7b80f00           call 0x6a0920
// 005a5049  83c408               add esp, 8
// 005a504c  8944244c             mov dword ptr [esp + 0x4c], eax
// 005a5050  5f                   pop edi
// 005a5051  c644243c0d           mov byte ptr [esp + 0x3c], 0xd
// 005a5056  5d                   pop ebp
// 005a5057  3bc3                 cmp eax, ebx
// 005a5059  740e                 je 0x5a5069
// 005a505b  68883e8300           push 0x833e88
// 005a5060  8bc8                 mov ecx, eax
// 005a5062  e839f30100           call 0x5c43a0
// 005a5067  eb02                 jmp 0x5a506b
// 005a5069  33c0                 xor eax, eax
// 005a506b  898628040000         mov dword ptr [esi + 0x428], eax
// 005a5071  6848c00000           push 0xc048
// 005a5076  c644243c0e           mov byte ptr [esp + 0x3c], 0xe
// 005a507b  e8a0b80f00           call 0x6a0920
// 005a5080  83c404               add esp, 4
// 005a5083  89442444             mov dword ptr [esp + 0x44], eax
// 005a5087  c64424380f           mov byte ptr [esp + 0x38], 0xf
// 005a508c  3bc3                 cmp eax, ebx
// 005a508e  740e                 je 0x5a509e
// 005a5090  68783e8300           push 0x833e78
// 005a5095  8bc8                 mov ecx, eax
// 005a5097  e804f30100           call 0x5c43a0
// 005a509c  eb02                 jmp 0x5a50a0
// 005a509e  33c0                 xor eax, eax
// 005a50a0  89862c040000         mov dword ptr [esi + 0x42c], eax
// 005a50a6  6848c00000           push 0xc048
// 005a50ab  c644243c10           mov byte ptr [esp + 0x3c], 0x10
// 005a50b0  e86bb80f00           call 0x6a0920
// 005a50b5  83c404               add esp, 4
// 005a50b8  89442444             mov dword ptr [esp + 0x44], eax
// 005a50bc  c644243811           mov byte ptr [esp + 0x38], 0x11
// 005a50c1  3bc3                 cmp eax, ebx
// 005a50c3  740e                 je 0x5a50d3
// 005a50c5  68643e8300           push 0x833e64
// 005a50ca  8bc8                 mov ecx, eax
// 005a50cc  e8cff20100           call 0x5c43a0
// 005a50d1  eb02                 jmp 0x5a50d5
// 005a50d3  33c0                 xor eax, eax
// 005a50d5  898630040000         mov dword ptr [esi + 0x430], eax
// 005a50db  6848c00000           push 0xc048
// 005a50e0  c644243c12           mov byte ptr [esp + 0x3c], 0x12
// 005a50e5  e836b80f00           call 0x6a0920
// 005a50ea  83c404               add esp, 4
// 005a50ed  89442444             mov dword ptr [esp + 0x44], eax
// 005a50f1  c644243813           mov byte ptr [esp + 0x38], 0x13
// 005a50f6  3bc3                 cmp eax, ebx
// 005a50f8  740e                 je 0x5a5108
// 005a50fa  68503e8300           push 0x833e50
// 005a50ff  8bc8                 mov ecx, eax
// 005a5101  e89af20100           call 0x5c43a0
// 005a5106  eb02                 jmp 0x5a510a
// 005a5108  33c0                 xor eax, eax
// 005a510a  898634040000         mov dword ptr [esi + 0x434], eax
// 005a5110  6848c00000           push 0xc048
// 005a5115  c644243c14           mov byte ptr [esp + 0x3c], 0x14
// 005a511a  e801b80f00           call 0x6a0920
// 005a511f  83c404               add esp, 4
// 005a5122  89442444             mov dword ptr [esp + 0x44], eax
// 005a5126  c644243815           mov byte ptr [esp + 0x38], 0x15
// 005a512b  3bc3                 cmp eax, ebx
// 005a512d  740e                 je 0x5a513d
// 005a512f  68383e8300           push 0x833e38
// 005a5134  8bc8                 mov ecx, eax
// 005a5136  e865f20100           call 0x5c43a0
// 005a513b  eb02                 jmp 0x5a513f
// 005a513d  33c0                 xor eax, eax
// 005a513f  898638040000         mov dword ptr [esi + 0x438], eax
// 005a5145  682c3e8300           push 0x833e2c
// 005a514a  8d4c2418             lea ecx, [esp + 0x18]
// 005a514e  c644243c16           mov byte ptr [esp + 0x3c], 0x16
// 005a5153  899e3c040000         mov dword ptr [esi + 0x43c], ebx
// 005a5159  ff1558248000         call dword ptr [0x802458]
// 005a515f  8d4c2414             lea ecx, [esp + 0x14]
// 005a5163  51                   push ecx
// 005a5164  8bce                 mov ecx, esi
// 005a5166  c644243c17           mov byte ptr [esp + 0x3c], 0x17
// 005a516b  e8205efbff           call 0x55af90
// 005a5170  8d4c2414             lea ecx, [esp + 0x14]
// 005a5174  c644243816           mov byte ptr [esp + 0x38], 0x16
// 005a5179  ff1568248000         call dword ptr [0x802468]
// 005a517f  8b962c040000         mov edx, dword ptr [esi + 0x42c]
// 005a5185  8b8628040000         mov eax, dword ptr [esi + 0x428]
// 005a518b  898240c00000         mov dword ptr [edx + 0xc040], eax
// 005a5191  8b8ee4020000         mov ecx, dword ptr [esi + 0x2e4]
// 005a5197  8b91fc000000         mov edx, dword ptr [ecx + 0xfc]
// 005a519d  8b862c040000         mov eax, dword ptr [esi + 0x42c]
// 005a51a3  898240c00000         mov dword ptr [edx + 0xc040], eax
// 005a51a9  8b8e30040000         mov ecx, dword ptr [esi + 0x430]
// 005a51af  8b9628040000         mov edx, dword ptr [esi + 0x428]
// 005a51b5  899140c00000         mov dword ptr [ecx + 0xc040], edx
// 005a51bb  8b8634040000         mov eax, dword ptr [esi + 0x434]
// 005a51c1  8b8e28040000         mov ecx, dword ptr [esi + 0x428]
// 005a51c7  898840c00000         mov dword ptr [eax + 0xc040], ecx
// 005a51cd  8b8628040000         mov eax, dword ptr [esi + 0x428]
// 005a51d3  8b9638040000         mov edx, dword ptr [esi + 0x438]
// 005a51d9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005a51dd  898240c00000         mov dword ptr [edx + 0xc040], eax
// 005a51e3  8bc6                 mov eax, esi
// 005a51e5  5e                   pop esi
// 005a51e6  5b                   pop ebx
// 005a51e7  64890d00000000       mov dword ptr fs:[0], ecx
// 005a51ee  83c434               add esp, 0x34
// 005a51f1  c20800               ret 8



#include <string>
typedef std::string String;
extern "C" void* __stdcall sub_6A0920(unsigned int);
extern "C" void __stdcall sub_45DB40(void*);
extern "C" void __stdcall sub_64B2A0(void*, void*, void*);
extern "C" void __stdcall sub_614DC0(void*);
extern "C" void __stdcall sub_5E9EC0(void*);
extern "C" void __stdcall sub_5A4280(void);
extern "C" void __stdcall sub_583460(void*, int);
extern "C" void __stdcall sub_5C43A0(void*, void*);
extern "C" void __stdcall sub_55AF90(void*, void*);

extern "C" void* __stdcall mfc798(void*, const char*);
extern "C" void __stdcall mfc798_dtor(void*);

struct S {
    char pad0[0x10];
    void* vt10;
    void* vt14;
    char pad18[8];
    void* vt20;
    void* vt24;
    char pad28[0x1c];
    void* vt44;
    char pad48[0x1c];
    void* vt64;
    char pad68[0x1c];
    void* vt84;
    char pad88[0x1c];
    void* vta4;
    char padA8[0x1c];
    void* vtc4;
    char padC8[0x68];
    void* vt130;
    void* vt134;
    char pad138[0x1ac];
    void* field2e4;
    void* vt2e8;
    void* vt2ec;
    char pad2f0[0x98];
    void* vt388;
    void* vt38c;
    void* vt390;
    void* vt394;
    void* vt398;
    void* vt39c;
    void* field3a0;
    void* field3a4;
    void* field3a8;
    char field3ac;
    char pad3ad[3];
    void* field3b0;
    void* field3b4;
    void* field3b8;
    void* field3bc;
    unsigned short field3c0;
    unsigned short field3c2;
    unsigned short field3c4;
    unsigned short field3c6;
    unsigned short field3c8;
    unsigned short field3ca;
    void* field3cc;
    char field3d0;
    char pad3d1[3];
    char field3d4[0x20];
    void* field3f4;
    char field3f8;
    char pad3f9[3];
    void* field3fc;
    void* field400;
    char field404[0xc];
    double field410;
    double field418;
    double field420;
    void* field428;
    void* field42c;
    void* field430;
    void* field434;
    void* field438;
    void* field43c;

    S(int, int);
};

S::S(int a, int b)
{
    if (a != 0) {
        *(void**)((char*)this + 0x134) = (void*)0x833e98;
        *(void**)((char*)this + 0x458) = (void*)0x846144;
    }

    sub_5A4280();

    *(void**)((char*)this + 0x2e8) = (void*)0x82f848;
    sub_583460((char*)this + 0x2ec, 0);

    *(void**)((char*)this + 0x38c) = 0;
    *(void**)((char*)this + 0x390) = 0;
    *(void**)((char*)this + 0x388) = 0;
    *(void**)((char*)this + 0x398) = 0;
    *(void**)((char*)this + 0x39c) = 0;
    *(void**)((char*)this + 0x394) = 0;

    sub_614DC0((char*)this + 0x314);
    sub_5E9EC0((char*)this + 0x344);
    sub_5E9EC0((char*)this + 0x364);

    *(void**)((char*)this + 0x0) = (void*)0x833a54;
    *(void**)((char*)this + 0x10) = (void*)0x833a44;
    *(void**)((char*)this + 0x14) = (void*)0x833a3c;
    *(void**)((char*)this + 0x20) = (void*)0x833a34;
    *(void**)((char*)this + 0x24) = (void*)0x833a24;
    *(void**)((char*)this + 0x44) = (void*)0x833a14;
    *(void**)((char*)this + 0x64) = (void*)0x833a04;
    *(void**)((char*)this + 0x84) = (void*)0x8339f4;
    *(void**)((char*)this + 0xa4) = (void*)0x8339e4;
    *(void**)((char*)this + 0xc4) = (void*)0x8339d4;
    *(void**)((char*)this + 0x130) = (void*)0x8339c8;
    *(void**)((char*)this + 0x1a0) = (void*)0x8339b0;
    *(void**)((char*)this + 0x288) = (void*)0x833998;
    *(void**)((char*)this + 0x2e8) = (void*)0x833990;
    *(void**)((char*)this + 0x2ec) = (void*)0x833988;
    *(void**)((char*)this + 0x314) = (void*)0x833980;
    *(void**)((char*)this + 0x340) = (void*)0x833970;
    *(void**)((char*)this + 0x344) = (void*)0x833960;
    *(void**)((char*)this + 0x364) = (void*)0x833950;
    *(void**)((char*)this + 0x384) = (void*)0x833944;

    {
        void* p = *(void**)((char*)this + 0x134);
        void* q = *(void**)((char*)p + 4);
        *(void**)((char*)q + (int)this + 0x134) = (void*)0x833938;
    }
    {
        void* p = *(void**)((char*)this + 0x134);
        void* q = *(void**)((char*)p + 8);
        *(void**)((char*)q + (int)this + 0x134) = (void*)0x833930;
    }
    {
        void* p = *(void**)((char*)this + 0x134);
        void* q = *(void**)((char*)p + 0xc);
        *(void**)((char*)q + (int)this + 0x134) = (void*)0x833914;
    }
    {
        void* p = *(void**)((char*)this + 0x134);
        void* q = *(void**)((char*)p + 4);
        *(void**)((char*)q + (int)this + 0x130) = (void*)((char*)q - 0x310);
    }
    {
        void* p = *(void**)((char*)this + 0x134);
        void* q = *(void**)((char*)p + 8);
        *(void**)((char*)q + (int)this + 0x130) = (void*)((char*)q - 0x318);
    }
    {
        void* p = *(void**)((char*)this + 0x134);
        void* q = *(void**)((char*)p + 0xc);
        *(void**)((char*)q + (int)this + 0x130) = (void*)((char*)q - 0x320);
    }

    *(void**)((char*)this + 0x3a0) = 0;
    *(void**)((char*)this + 0x3a4) = 0;
    *(void**)((char*)this + 0x3a8) = (void*)b;
    *(char*)((char*)this + 0x3ac) = 0;
    *(void**)((char*)this + 0x3b0) = 0;
    *(void**)((char*)this + 0x3b4) = 0;
    *(void**)((char*)this + 0x3b8) = 0;
    *(void**)((char*)this + 0x3bc) = 0;
    *(unsigned short*)((char*)this + 0x3c0) = 0;
    *(unsigned short*)((char*)this + 0x3c2) = 0;
    *(unsigned short*)((char*)this + 0x3c6) = 0;
    *(unsigned short*)((char*)this + 0x3c4) = 0;
    *(unsigned short*)((char*)this + 0x3ca) = 0;
    *(unsigned short*)((char*)this + 0x3c8) = 0;

    {
        char* p1 = (char*)this + 0x3d4;
        char* p2 = (char*)this + 0x3d0;
        char* p3 = (char*)this + 0x3cc;
        sub_64B2A0(p1, p2, p3);
    }

    *(void**)((char*)this + 0x3cc) = 0;
    *(char*)((char*)this + 0x3d0) = 0;
    *(void**)((char*)this + 0x3f4) = 0;
    *(char*)((char*)this + 0x3f8) = 0;
    *(void**)((char*)this + 0x3fc) = 0;
    *(void**)((char*)this + 0x400) = 0;

    sub_45DB40((char*)this + 0x404);

    *(double*)((char*)this + 0x410) = 0.0;
    *(double*)((char*)this + 0x418) = 0.0;
    *(double*)((char*)this + 0x420) = 0.0;

    {
        void* p = sub_6A0920(0xc048);
        if (p != 0) {
            sub_5C43A0(p, (void*)0x833e88);
        } else {
            p = 0;
        }
        *(void**)((char*)this + 0x428) = p;
    }
    {
        void* p = sub_6A0920(0xc048);
        if (p != 0) {
            sub_5C43A0(p, (void*)0x833e78);
        } else {
            p = 0;
        }
        *(void**)((char*)this + 0x42c) = p;
    }
    {
        void* p = sub_6A0920(0xc048);
        if (p != 0) {
            sub_5C43A0(p, (void*)0x833e64);
        } else {
            p = 0;
        }
        *(void**)((char*)this + 0x430) = p;
    }
    {
        void* p = sub_6A0920(0xc048);
        if (p != 0) {
            sub_5C43A0(p, (void*)0x833e50);
        } else {
            p = 0;
        }
        *(void**)((char*)this + 0x434) = p;
    }
    {
        void* p = sub_6A0920(0xc048);
        if (p != 0) {
            sub_5C43A0(p, (void*)0x833e38);
        } else {
            p = 0;
        }
        *(void**)((char*)this + 0x438) = p;
    }

    *(void**)((char*)this + 0x43c) = 0;

    {
        String s;
        mfc798(&s, "Workspace");
        sub_55AF90(this, &s);
        mfc798_dtor(&s);
    }

    {
        void* p = *(void**)((char*)this + 0x42c);
        void* q = *(void**)((char*)this + 0x428);
        *(void**)((char*)p + 0xc040) = q;
    }
    {
        void* p = *(void**)((char*)this + 0x2e4);
        void* q = *(void**)((char*)p + 0xfc);
        void* r = *(void**)((char*)this + 0x42c);
        *(void**)((char*)q + 0xc040) = r;
    }
    {
        void* p = *(void**)((char*)this + 0x430);
        void* q = *(void**)((char*)this + 0x428);
        *(void**)((char*)p + 0xc040) = q;
    }
    {
        void* p = *(void**)((char*)this + 0x434);
        void* q = *(void**)((char*)this + 0x428);
        *(void**)((char*)p + 0xc040) = q;
    }
    {
        void* p = *(void**)((char*)this + 0x428);
        void* q = *(void**)((char*)this + 0x438);
        *(void**)((char*)q + 0xc040) = p;
    }
}
