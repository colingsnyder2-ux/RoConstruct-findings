// from server: 49% by atomic.potato
// roc 2009-06 004448d0  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 604 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004448d0
//
// 004448d0  64a100000000         mov eax, dword ptr fs:[0]
// 004448d6  6aff                 push -1
// 004448d8  68980e8700           push 0x870e98
// 004448dd  50                   push eax
// 004448de  64892500000000       mov dword ptr fs:[0], esp
// 004448e5  83ec28               sub esp, 0x28
// 004448e8  53                   push ebx
// 004448e9  56                   push esi
// 004448ea  57                   push edi
// 004448eb  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 004448ef  33db                 xor ebx, ebx
// 004448f1  8bf1                 mov esi, ecx
// 004448f3  3bfb                 cmp edi, ebx
// 004448f5  7463                 je 0x44495a
// 004448f7  8d442444             lea eax, [esp + 0x44]
// 004448fb  57                   push edi
// 004448fc  50                   push eax
// 004448fd  e8aeb4ffff           call 0x43fdb0
// 00444902  8b08                 mov ecx, dword ptr [eax]
// 00444904  8d542424             lea edx, [esp + 0x24]
// 00444908  57                   push edi
// 00444909  52                   push edx
// 0044490a  898eec000000         mov dword ptr [esi + 0xec], ecx
// 00444910  e84bd3ffff           call 0x441c60
// 00444915  83c410               add esp, 0x10
// 00444918  50                   push eax
// 00444919  8d8ef0000000         lea ecx, [esi + 0xf0]
// 0044491f  895c2440             mov dword ptr [esp + 0x40], ebx
// 00444923  e8b8c2ffff           call 0x440be0
// 00444928  8b442428             mov eax, dword ptr [esp + 0x28]
// 0044492c  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 00444934  3bc3                 cmp eax, ebx
// 00444936  7409                 je 0x444941
// 00444938  50                   push eax
// 00444939  e8f4402d00           call 0x718a32
// 0044493e  83c404               add esp, 4
// 00444941  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00444945  50                   push eax
// 00444946  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0044494a  895c2430             mov dword ptr [esp + 0x30], ebx
// 0044494e  895c2434             mov dword ptr [esp + 0x34], ebx
// 00444952  e8db402d00           call 0x718a32
// 00444957  83c404               add esp, 4
// 0044495a  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00444960  8dbef0000000         lea edi, [esi + 0xf0]
// 00444966  89442444             mov dword ptr [esp + 0x44], eax
// 0044496a  39470c               cmp dword ptr [edi + 0xc], eax
// 0044496d  7606                 jbe 0x444975
// 0044496f  ff15ace98900         call dword ptr [0x89e9ac]
// 00444975  8b0f                 mov ecx, dword ptr [edi]
// 00444977  55                   push ebp
// 00444978  8b6f10               mov ebp, dword ptr [edi + 0x10]
// 0044497b  894c2410             mov dword ptr [esp + 0x10], ecx
// 0044497f  396f0c               cmp dword ptr [edi + 0xc], ebp
// 00444982  7606                 jbe 0x44498a
// 00444984  ff15ace98900         call dword ptr [0x89e9ac]
// 0044498a  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 0044498d  3b5f10               cmp ebx, dword ptr [edi + 0x10]
// 00444990  7606                 jbe 0x444998
// 00444992  ff15ace98900         call dword ptr [0x89e9ac]
// 00444998  8b07                 mov eax, dword ptr [edi]
// 0044499a  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0044499e  3bdd                 cmp ebx, ebp
// 004449a0  7411                 je 0x4449b3
// 004449a2  8b8eb6000000         mov ecx, dword ptr [esi + 0xb6]
// 004449a8  390b                 cmp dword ptr [ebx], ecx
// 004449aa  7407                 je 0x4449b3
// 004449ac  83c304               add ebx, 4
// 004449af  3bdd                 cmp ebx, ebp
// 004449b1  75f5                 jne 0x4449a8
// 004449b3  5d                   pop ebp
// 004449b4  85c0                 test eax, eax
// 004449b6  7406                 je 0x4449be
// 004449b8  3b44240c             cmp eax, dword ptr [esp + 0xc]
// 004449bc  7406                 je 0x4449c4
// 004449be  ff15ace98900         call dword ptr [0x89e9ac]
// 004449c4  3b5c2444             cmp ebx, dword ptr [esp + 0x44]
// 004449c8  740e                 je 0x4449d8
// 004449ca  8b96b6000000         mov edx, dword ptr [esi + 0xb6]
// 004449d0  8996be000000         mov dword ptr [esi + 0xbe], edx
// 004449d6  eb38                 jmp 0x444a10
// 004449d8  0fbf86ec000000       movsx eax, word ptr [esi + 0xec]
// 004449df  0fbf8eee000000       movsx ecx, word ptr [esi + 0xee]
// 004449e6  89442444             mov dword ptr [esp + 0x44], eax
// 004449ea  51                   push ecx
// 004449eb  db442448             fild dword ptr [esp + 0x48]
// 004449ef  894c2448             mov dword ptr [esp + 0x48], ecx
// 004449f3  8d542448             lea edx, [esp + 0x48]
// 004449f7  da742448             fidiv dword ptr [esp + 0x48]
// 004449fb  d91c24               fstp dword ptr [esp]
// 004449fe  57                   push edi
// 004449ff  52                   push edx
// 00444a00  e86bfdffff           call 0x444770
// 00444a05  8b00                 mov eax, dword ptr [eax]
// 00444a07  83c40c               add esp, 0xc
// 00444a0a  8986be000000         mov dword ptr [esi + 0xbe], eax
// 00444a10  6683beba00000000     cmp word ptr [esi + 0xba], 0
// 00444a18  7418                 je 0x444a32
// 00444a1a  6683bebc00000000     cmp word ptr [esi + 0xbc], 0
// 00444a22  740e                 je 0x444a32
// 00444a24  8b8eba000000         mov ecx, dword ptr [esi + 0xba]
// 00444a2a  898ec2000000         mov dword ptr [esi + 0xc2], ecx
// 00444a30  eb20                 jmp 0x444a52
// 00444a32  d905f8678b00         fld dword ptr [0x8b67f8]
// 00444a38  51                   push ecx
// 00444a39  d91c24               fstp dword ptr [esp]
// 00444a3c  8d542448             lea edx, [esp + 0x48]
// 00444a40  57                   push edi
// 00444a41  52                   push edx
// 00444a42  e829fdffff           call 0x444770
// 00444a47  8b00                 mov eax, dword ptr [eax]
// 00444a49  83c40c               add esp, 0xc
// 00444a4c  8986c2000000         mov dword ptr [esi + 0xc2], eax
// 00444a52  0fbf8ec2000000       movsx ecx, word ptr [esi + 0xc2]
// 00444a59  0fbf86ec000000       movsx eax, word ptr [esi + 0xec]
// 00444a60  894c240c             mov dword ptr [esp + 0xc], ecx
// 00444a64  3bc1                 cmp eax, ecx
// 00444a66  89442444             mov dword ptr [esp + 0x44], eax
// 00444a6a  8d4c2444             lea ecx, [esp + 0x44]
// 00444a6e  7c04                 jl 0x444a74
// 00444a70  8d4c240c             lea ecx, [esp + 0xc]
// 00444a74  0fb739               movzx edi, word ptr [ecx]
// 00444a77  0fbf9eee000000       movsx ebx, word ptr [esi + 0xee]
// 00444a7e  0fbf96c4000000       movsx edx, word ptr [esi + 0xc4]
// 00444a85  8bcb                 mov ecx, ebx
// 00444a87  894c2444             mov dword ptr [esp + 0x44], ecx
// 00444a8b  3bca                 cmp ecx, edx
// 00444a8d  6689bec2000000       mov word ptr [esi + 0xc2], di
// 00444a94  8954240c             mov dword ptr [esp + 0xc], edx
// 00444a98  8d4c2444             lea ecx, [esp + 0x44]
// 00444a9c  7c04                 jl 0x444aa2
// 00444a9e  8d4c240c             lea ecx, [esp + 0xc]
// 00444aa2  0fb709               movzx ecx, word ptr [ecx]
// 00444aa5  99                   cdq 
// 00444aa6  2bc2                 sub eax, edx
// 00444aa8  0fbfd7               movsx edx, di
// 00444aab  d1f8                 sar eax, 1
// 00444aad  89442444             mov dword ptr [esp + 0x44], eax
// 00444ab1  3bd0                 cmp edx, eax
// 00444ab3  66898ec4000000       mov word ptr [esi + 0xc4], cx
// 00444aba  8954240c             mov dword ptr [esp + 0xc], edx
// 00444abe  8d442444             lea eax, [esp + 0x44]
// 00444ac2  7c04                 jl 0x444ac8
// 00444ac4  8d44240c             lea eax, [esp + 0xc]
// 00444ac8  668b10               mov dx, word ptr [eax]
// 00444acb  8bc3                 mov eax, ebx
// 00444acd  668996c2000000       mov word ptr [esi + 0xc2], dx
// 00444ad4  99                   cdq 
// 00444ad5  2bc2                 sub eax, edx
// 00444ad7  0fbfc9               movsx ecx, cx
// 00444ada  d1f8                 sar eax, 1
// 00444adc  3bc8                 cmp ecx, eax
// 00444ade  89442444             mov dword ptr [esp + 0x44], eax
// 00444ae2  894c240c             mov dword ptr [esp + 0xc], ecx
// 00444ae6  7d22                 jge 0x444b0a
// 00444ae8  8d442444             lea eax, [esp + 0x44]
// 00444aec  668b00               mov ax, word ptr [eax]
// 00444aef  5f                   pop edi
// 00444af0  668986c4000000       mov word ptr [esi + 0xc4], ax
// 00444af7  5e                   pop esi
// 00444af8  5b                   pop ebx
// 00444af9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00444afd  64890d00000000       mov dword ptr fs:[0], ecx
// 00444b04  83c434               add esp, 0x34
// 00444b07  c20400               ret 4
// 00444b0a  8d44240c             lea eax, [esp + 0xc]
// 00444b0e  668b08               mov cx, word ptr [eax]
// 00444b11  66898ec4000000       mov word ptr [esi + 0xc4], cx
// 00444b18  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00444b1c  5f                   pop edi
// 00444b1d  5e                   pop esi
// 00444b1e  5b                   pop ebx
// 00444b1f  64890d00000000       mov dword ptr fs:[0], ecx
// 00444b26  83c434               add esp, 0x34
// 00444b29  c20400               ret 4

struct VCRenderSettingsItem {
    char pad0[0xb6];
    short field_b6;
    char pad1[0x6];
    short field_be;
    char pad2[0x2];
    short field_c2;
    short field_c4;
    char pad3[0x26];
    short field_ec;
    short field_ee;
    char pad4[0x2];
    int field_f0;
    char pad5[0xc];
    int field_100;
    int EnumPropDescriptor(int);
};

extern "C" int __cdecl sub_43FDB0(int*, int);
extern "C" int __cdecl sub_441C60(int*, int);
extern "C" int __cdecl sub_440BE0(void*, void*);
extern "C" int __cdecl sub_444770(int*, void*, float);
extern "C" void __cdecl sub_718A32(void*);
extern "C" void __stdcall sub_89E9AC();

int VCRenderSettingsItem::EnumPropDescriptor(int arg) {
    int local_44;
    int local_28;
    int local_1c;
    int local_c;
    int local_40;
    int local_2c;
    int local_30;
    int local_34;
    int local_3c;
    int local_10;
    int local_48;
    int local_24;
    int local_20;

    if (arg != 0) {
        sub_43FDB0(&local_44, arg);
        *(int*)((char*)this + 0xec) = local_44;
        sub_441C60(&local_24, arg);
        local_40 = 0;
        sub_440BE0((char*)this + 0xf0, &local_24);
        if (local_28 != 0) {
            sub_718A32((void*)local_28);
        }
        local_3c = -1;
        if (local_1c != 0) {
            sub_718A32((void*)local_1c);
        }
        local_2c = 0;
        local_30 = 0;
        local_34 = 0;
    }

    int v100 = *(int*)((char*)this + 0x100);
    local_44 = v100;
    char* edi = (char*)this + 0xf0;
    if (*(int*)(edi + 0xc) > v100) {
        sub_89E9AC();
    }
    int v0 = *(int*)edi;
    local_10 = v0;
    int ebp = *(int*)(edi + 0x10);
    if (*(int*)(edi + 0xc) > ebp) {
        sub_89E9AC();
    }
    int ebx = *(int*)(edi + 0xc);
    if (ebx > *(int*)(edi + 0x10)) {
        sub_89E9AC();
    }
    int eax = *(int*)edi;
    local_1c = ebx;
    if (ebx != ebp) {
        int ecx = *(int*)((char*)this + 0xb6);
        while (*(int*)ebx != ecx) {
            ebx += 4;
            if (ebx == ebp) break;
        }
    }
    if (eax != 0 && eax != local_10) {
        sub_89E9AC();
    }
    if (ebx != local_44) {
        *(int*)((char*)this + 0xbe) = *(int*)((char*)this + 0xb6);
    } else {
        int a = *(short*)((char*)this + 0xec);
        int b = *(short*)((char*)this + 0xee);
        local_44 = a;
        local_48 = b;
        float f = (float)a / (float)b;
        sub_444770(&local_24, edi, f);
        *(int*)((char*)this + 0xbe) = local_24;
    }

    if (*(short*)((char*)this + 0xba) != 0 && *(short*)((char*)this + 0xbc) != 0) {
        *(int*)((char*)this + 0xc2) = *(int*)((char*)this + 0xba);
    } else {
        float f = *(float*)0x8b67f8;
        sub_444770(&local_24, edi, f);
        *(int*)((char*)this + 0xc2) = local_24;
    }

    int c2 = *(short*)((char*)this + 0xc2);
    int ec = *(short*)((char*)this + 0xec);
    local_c = c2;
    local_44 = ec;
    int* p1 = &local_44;
    if (ec < c2) p1 = &local_c;
    unsigned short di = *(unsigned short*)p1;

    int ee = *(short*)((char*)this + 0xee);
    int c4 = *(short*)((char*)this + 0xc4);
    local_44 = ee;
    local_c = c4;
    int* p2 = &local_44;
    if (ee < c4) p2 = &local_c;
    unsigned short cx = *(unsigned short*)p2;
    *(short*)((char*)this + 0xc2) = di;
    *(short*)((char*)this + 0xc4) = cx;

    int eax2 = ec;
    int edx2 = eax2 >> 31;
    eax2 = (eax2 - edx2) >> 1;
    int edx3 = (int)di;
    local_44 = eax2;
    local_c = edx3;
    int* p3 = &local_44;
    if (edx3 < eax2) p3 = &local_c;
    unsigned short dx = *(unsigned short*)p3;
    *(short*)((char*)this + 0xc2) = dx;

    int eax3 = ee;
    int edx4 = eax3 >> 31;
    eax3 = (eax3 - edx4) >> 1;
    int ecx2 = (int)cx;
    local_44 = eax3;
    local_c = ecx2;
    if (ecx2 >= eax3) {
        unsigned short cxx = *(unsigned short*)&local_c;
        *(short*)((char*)this + 0xc4) = cxx;
    } else {
        unsigned short axx = *(unsigned short*)&local_44;
        *(short*)((char*)this + 0xc4) = axx;
    }
    return 0;
}
