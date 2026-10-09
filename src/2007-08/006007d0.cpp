// from server: 100% by colin
// roc 2007-08 006007d0  unit: RBX::VerbWidget  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006007d0
//
// 006007d0  56                   push esi
// 006007d1  8bf1                 mov esi, ecx
// 006007d3  e878ffffff           call 0x600750
// 006007d8  8b442408             mov eax, dword ptr [esp + 8]
// 006007dc  898600010000         mov dword ptr [esi + 0x100], eax
// 006007e2  c706b4297c00         mov dword ptr [esi], 0x7c29b4
// 006007e8  c74604a8297c00       mov dword ptr [esi + 4], 0x7c29a8
// 006007ef  c74610a0297c00       mov dword ptr [esi + 0x10], 0x7c29a0
// 006007f6  c7461490297c00       mov dword ptr [esi + 0x14], 0x7c2990
// 006007fd  c7462c80297c00       mov dword ptr [esi + 0x2c], 0x7c2980
// 00600804  c7464470297c00       mov dword ptr [esi + 0x44], 0x7c2970
// 0060080b  c7465c60297c00       mov dword ptr [esi + 0x5c], 0x7c2960
// 00600812  c7467450297c00       mov dword ptr [esi + 0x74], 0x7c2950
// 00600819  c7868c00000040297c00 mov dword ptr [esi + 0x8c], 0x7c2940
// 00600823  c786e800000038297c00 mov dword ptr [esi + 0xe8], 0x7c2938
// 0060082d  8bc6                 mov eax, esi
// 0060082f  5e                   pop esi
// 00600830  c20400               ret 4

struct VerbWidget {
    char pad[0x100];
    int field_100;
    VerbWidget(int arg);
};

void baseInit();

VerbWidget::VerbWidget(int arg) {
    baseInit();
    field_100 = arg;
    *(int*)((char*)this + 0x00) = 0x7c29b4;
    *(int*)((char*)this + 0x04) = 0x7c29a8;
    *(int*)((char*)this + 0x10) = 0x7c29a0;
    *(int*)((char*)this + 0x14) = 0x7c2990;
    *(int*)((char*)this + 0x2c) = 0x7c2980;
    *(int*)((char*)this + 0x44) = 0x7c2970;
    *(int*)((char*)this + 0x5c) = 0x7c2960;
    *(int*)((char*)this + 0x74) = 0x7c2950;
    *(int*)((char*)this + 0x8c) = 0x7c2940;
    *(int*)((char*)this + 0xe8) = 0x7c2938;
}
