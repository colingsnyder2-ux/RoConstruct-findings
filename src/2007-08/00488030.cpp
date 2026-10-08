// from server: 35% by colin
// roc 2007-08 00488030  unit: P8CRenderSettings::?$GetSetImpl  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00488030
//
// 00488030  51                   push ecx
// 00488031  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00488035  33c0                 xor eax, eax
// 00488037  890424               mov dword ptr [esp], eax
// 0048803a  56                   push esi
// 0048803b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0048803f  88442404             mov byte ptr [esp + 4], al
// 00488043  8b442404             mov eax, dword ptr [esp + 4]
// 00488047  50                   push eax
// 00488048  51                   push ecx
// 00488049  8bce                 mov ecx, esi
// 0048804b  e8f0f7ffff           call 0x487840
// 00488050  8bc6                 mov eax, esi
// 00488052  5e                   pop esi
// 00488053  59                   pop ecx
// 00488054  c3                   ret 

struct CRenderSettings {
    CRenderSettings* constructFromBool(char value);
};

CRenderSettings* CRenderSettings::constructFromBool(char value) {
    char local = value;
    int zero = 0;
    (void)zero;
    *(char*)&local = value;
    int arg = *(int*)&local;
    this->constructFromBool(*(char*)&arg);
    return this;
}
