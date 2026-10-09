// from server: 100% by colin
// roc 2007-08 00491ac0  unit: RBX::Network::VPlayer::?$Listener  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00491ac0
//
// 00491ac0  56                   push esi
// 00491ac1  8bf1                 mov esi, ecx
// 00491ac3  8b8e40010000         mov ecx, dword ptr [esi + 0x140]
// 00491ac9  85c9                 test ecx, ecx
// 00491acb  7411                 je 0x491ade
// 00491acd  8b01                 mov eax, dword ptr [ecx]
// 00491acf  8b962c010000         mov edx, dword ptr [esi + 0x12c]
// 00491ad5  8b80ec000000         mov eax, dword ptr [eax + 0xec]
// 00491adb  52                   push edx
// 00491adc  ffd0                 call eax
// 00491ade  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00491ae2  85c9                 test ecx, ecx
// 00491ae4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00491ae8  898e40010000         mov dword ptr [esi + 0x140], ecx
// 00491aee  899644010000         mov dword ptr [esi + 0x144], edx
// 00491af4  7411                 je 0x491b07
// 00491af6  8b01                 mov eax, dword ptr [ecx]
// 00491af8  8b962c010000         mov edx, dword ptr [esi + 0x12c]
// 00491afe  8b80e8000000         mov eax, dword ptr [eax + 0xe8]
// 00491b04  52                   push edx
// 00491b05  ffd0                 call eax
// 00491b07  5e                   pop esi
// 00491b08  c20800               ret 8

struct Listener {
    void setListener(int, int);
};

void Listener::setListener(int a, int b) {
    int* old = *(int**)((char*)this + 0x140);
    if (old) {
        int* vtbl = *(int**)old;
        int arg = *(int*)((char*)this + 0x12c);
        ((void (__thiscall*)(int*, int))vtbl[0xec / 4])(old, arg);
    }
    *(int*)((char*)this + 0x140) = a;
    *(int*)((char*)this + 0x144) = b;
    if (a) {
        int* p = (int*)a;
        int* vtbl = *(int**)p;
        int arg = *(int*)((char*)this + 0x12c);
        ((void (__thiscall*)(int*, int))vtbl[0xe8 / 4])(p, arg);
    }
}
