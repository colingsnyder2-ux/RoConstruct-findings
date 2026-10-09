// from server: 74% by colin
// roc 2007-08 00416470  unit: VCLuaFunction::?$CComObject  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00416470
//
// 00416470  56                   push esi
// 00416471  8b742414             mov esi, dword ptr [esp + 0x14]
// 00416475  85f6                 test esi, esi
// 00416477  7509                 jne 0x416482
// 00416479  b803400080           mov eax, 0x80004003
// 0041647e  5e                   pop esi
// 0041647f  c21000               ret 0x10
// 00416482  33c0                 xor eax, eax
// 00416484  390564318800         cmp dword ptr [0x883164], eax
// 0041648a  750f                 jne 0x41649b
// 0041648c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00416490  50                   push eax
// 00416491  b958318800           mov ecx, 0x883158
// 00416496  e855f1feff           call 0x4055f0
// 0041649b  8b0d64318800         mov ecx, dword ptr [0x883164]
// 004164a1  890e                 mov dword ptr [esi], ecx
// 004164a3  8b0d64318800         mov ecx, dword ptr [0x883164]
// 004164a9  85c9                 test ecx, ecx
// 004164ab  740a                 je 0x4164b7
// 004164ad  8b11                 mov edx, dword ptr [ecx]
// 004164af  8b4204               mov eax, dword ptr [edx + 4]
// 004164b2  51                   push ecx
// 004164b3  ffd0                 call eax
// 004164b5  33c0                 xor eax, eax
// 004164b7  5e                   pop esi
// 004164b8  c21000               ret 0x10

struct VCLuaFunction {
    long __stdcall QueryInterface(void* ppvObject, void* riid);
};

extern "C" void* __cdecl sub_4055F0(void*);

extern void* dword_883164;
extern char byte_883158;

long __stdcall VCLuaFunction::QueryInterface(void* ppvObject, void* riid) {
    if (ppvObject == 0) {
        return 0x80004003;
    }
    if (dword_883164 == 0) {
        sub_4055F0(&byte_883158);
    }
    *(void**)ppvObject = dword_883164;
    if (dword_883164 != 0) {
        void** vtbl = *(void***)dword_883164;
        void* fn = vtbl[1];
        ((void (__stdcall*)(void*))fn)(dword_883164);
    }
    return 0;
}
