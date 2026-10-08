// from server: 60% by colin
// roc 2008-06 00598cc0  unit: RBX::PartInstance  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598cc0
//
// 00598cc0  8b81c8020000         mov eax, dword ptr [ecx + 0x2c8]
// 00598cc6  d9808c000000         fld dword ptr [eax + 0x8c]
// 00598ccc  c3                   ret 

struct PartInstance {
    bool getIsArchivable() const;
};

extern "C" __declspec(dllimport) void __stdcall call_0x770920(int);
extern "C" __declspec(dllimport) void __stdcall call_0x6a0c68(int);

bool PartInstance::getIsArchivable() const {
    int eax = *(int*)((int)this + 0x2c8);
    double value = *(double*)(eax + 0x8c);
    return (bool)value; // Cast double to bool
}
