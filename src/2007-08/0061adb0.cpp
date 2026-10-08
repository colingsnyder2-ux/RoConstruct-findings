// from server: 73% by colin
// roc 2007-08 0061adb0  unit: RBX::P8Camera::?$GetSetImpl  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061adb0
//
// 0061adb0  56                   push esi
// 0061adb1  57                   push edi
// 0061adb2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0061adb6  8db1f8000000         lea esi, [ecx + 0xf8]
// 0061adbc  57                   push edi
// 0061adbd  8bce                 mov ecx, esi
// 0061adbf  ff1590e67700         call dword ptr [0x77e690]
// 0061adc5  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0061adc8  5f                   pop edi
// 0061adc9  89461c               mov dword ptr [esi + 0x1c], eax
// 0061adcc  5e                   pop esi
// 0061adcd  c20400               ret 4

struct P8Camera {
    char pad[0xf8];
    char sub[0x20];
    void assign(const P8Camera& other);
};

extern "C" void* __stdcall sub_77e690(char*, const char*);

void P8Camera::assign(const P8Camera& other) {
    char* base = (char*)this + 0xf8;
    sub_77e690(base, (const char*)&other + 0xf8);
    *(int*)(base + 0x1c) = *(const int*)((const char*)&other + 0x1c);
}
