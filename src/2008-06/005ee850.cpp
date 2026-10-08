// from server: 28% by colin
// roc 2008-06 005ee850  unit: VCRenderSettings::?$EnumPropDescriptor  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ee850
//
// 005ee850  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005ee853  8b01                 mov eax, dword ptr [ecx]
// 005ee855  8b4008               mov eax, dword ptr [eax + 8]
// 005ee858  ffe0                 jmp eax

struct VCRenderSettings {
    struct EnumPropDescriptor {
        void* m_getset;
        const void* m_enumDesc;

        EnumPropDescriptor(void* getset, const void* enumDesc);
    };
};

extern "C" __declspec(dllimport) void __cdecl G1_func_006c7d50(void*);

VCRenderSettings::EnumPropDescriptor::EnumPropDescriptor(void* getset, const void* enumDesc) {
    m_getset = getset;
    m_enumDesc = enumDesc;
}
