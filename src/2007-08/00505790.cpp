// from server: 88% by colin
// roc 2007-08 00505790  unit: G3D::Log  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00505790
//
// 00505790  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00505794  8b542404             mov edx, dword ptr [esp + 4]
// 00505798  56                   push esi
// 00505799  8bf1                 mov esi, ecx
// 0050579b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0050579f  50                   push eax
// 005057a0  51                   push ecx
// 005057a1  52                   push edx
// 005057a2  8bce                 mov ecx, esi
// 005057a4  c70684317900         mov dword ptr [esi], 0x793184
// 005057aa  c7460400000000       mov dword ptr [esi + 4], 0
// 005057b1  e85afbffff           call 0x505310
// 005057b6  8bc6                 mov eax, esi
// 005057b8  5e                   pop esi
// 005057b9  c20c00               ret 0xc

extern "C" void __stdcall sub_505310(const char* logFile, const char* name, int severity);

struct Log {
    void* vtable;
    int field_4;
    Log* init(const char* logFile, const char* name, int severity);
};

Log* Log::init(const char* logFile, const char* name, int severity)
{
    this->vtable = (void*)0x793184;
    this->field_4 = 0;
    sub_505310(logFile, name, severity);
    return this;
}
