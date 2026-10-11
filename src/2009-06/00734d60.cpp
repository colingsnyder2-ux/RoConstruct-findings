// from server: 65% by atomic.potato
// roc 2009-06 00734d60  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00734d60
//
// 00734d60  56                   push esi
// 00734d61  57                   push edi
// 00734d62  8bf1                 mov esi, ecx
// 00734d64  33ff                 xor edi, edi
// 00734d66  397e38               cmp dword ptr [esi + 0x38], edi
// 00734d69  7e2b                 jle 0x734d96
// 00734d6b  eb03                 jmp 0x734d70
// 00734d6d  8d4900               lea ecx, [ecx]
// 00734d70  85ff                 test edi, edi
// 00734d72  0f8c99000000         jl 0x734e11
// 00734d78  3b7e38               cmp edi, dword ptr [esi + 0x38]
// 00734d7b  0f8d90000000         jge 0x734e11
// 00734d81  8b4634               mov eax, dword ptr [esi + 0x34]
// 00734d84  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 00734d87  51                   push ecx
// 00734d88  e8a53cfeff           call 0x718a32
// 00734d8d  47                   inc edi
// 00734d8e  83c404               add esp, 4
// 00734d91  3b7e38               cmp edi, dword ptr [esi + 0x38]
// 00734d94  7cda                 jl 0x734d70
// 00734d96  6aff                 push -1
// 00734d98  6a00                 push 0
// 00734d9a  8d4e30               lea ecx, [esi + 0x30]
// 00734d9d  e86ed70100           call 0x752510
// 00734da2  33ff                 xor edi, edi
// 00734da4  397e4c               cmp dword ptr [esi + 0x4c], edi
// 00734da7  7e25                 jle 0x734dce
// 00734da9  8da42400000000       lea esp, [esp]
// 00734db0  85ff                 test edi, edi
// 00734db2  7c5d                 jl 0x734e11
// 00734db4  3b7e4c               cmp edi, dword ptr [esi + 0x4c]
// 00734db7  7d58                 jge 0x734e11
// 00734db9  8b5648               mov edx, dword ptr [esi + 0x48]
// 00734dbc  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00734dbf  50                   push eax
// 00734dc0  e86d3cfeff           call 0x718a32
// 00734dc5  47                   inc edi
// 00734dc6  83c404               add esp, 4
// 00734dc9  3b7e4c               cmp edi, dword ptr [esi + 0x4c]
// 00734dcc  7ce2                 jl 0x734db0
// 00734dce  6aff                 push -1
// 00734dd0  6a00                 push 0
// 00734dd2  8d4e44               lea ecx, [esi + 0x44]
// 00734dd5  e836d70100           call 0x752510
// 00734dda  8b06                 mov eax, dword ptr [esi]
// 00734ddc  8b3d60e18900         mov edi, dword ptr [0x89e160]
// 00734de2  85c0                 test eax, eax
// 00734de4  7409                 je 0x734def
// 00734de6  50                   push eax
// 00734de7  ffd7                 call edi
// 00734de9  c70600000000         mov dword ptr [esi], 0
// 00734def  8b4604               mov eax, dword ptr [esi + 4]
// 00734df2  85c0                 test eax, eax
// 00734df4  740a                 je 0x734e00
// 00734df6  50                   push eax
// 00734df7  ffd7                 call edi
// 00734df9  c7460400000000       mov dword ptr [esi + 4], 0
// 00734e00  5f                   pop edi
// 00734e01  c7462c00000000       mov dword ptr [esi + 0x2c], 0
// 00734e08  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 00734e0f  5e                   pop esi
// 00734e10  c3                   ret 
// 00734e11  e8ce3efeff           call 0x718ce4

extern "C" void __cdecl sub_718A32(void*);
extern "C" void __cdecl sub_718CE4();
extern "C" void __cdecl sub_752510(void*, int, int);
extern "C" void (__stdcall* g_89E160)(void*);

struct KKPAVCXTPImageManagerResource_CMap {
    void* field_00;
    void* field_04;
    char pad08[0x14];
    int field_1c;
    char pad20[0x0c];
    int field_2c;
    int field_30;
    int field_34;
    int field_38;
    char pad3c[0x08];
    int field_44;
    int field_48;
    int field_4c;
    void clear();
};

void KKPAVCXTPImageManagerResource_CMap::clear()
{
    int i;
    for (i = 0; i < field_38; ++i) {
        if (i < 0 || i >= field_38) {
            sub_718CE4();
        }
        sub_718A32((void*)((int*)field_34)[i]);
    }
    sub_752510(&field_2c, 0, -1);
    for (i = 0; i < field_4c; ++i) {
        if (i < 0 || i >= field_4c) {
            sub_718CE4();
        }
        sub_718A32((void*)((int*)field_48)[i]);
    }
    sub_752510(&field_44, 0, -1);
    if (field_00) {
        g_89E160(field_00);
        field_00 = 0;
    }
    if (field_04) {
        g_89E160(field_04);
        field_04 = 0;
    }
    field_2c = 0;
    field_1c = 0;
}
