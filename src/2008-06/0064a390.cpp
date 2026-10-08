// from server: 11% by colin
// roc 2008-06 0064a390  unit: RBX::CleanStage  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064a390
//
// 0064a390  8b4908               mov ecx, dword ptr [ecx + 8]
// 0064a393  8b01                 mov eax, dword ptr [ecx]
// 0064a395  8b500c               mov edx, dword ptr [eax + 0xc]
// 0064a398  ffe2                 jmp edx

struct CleanStage {
    char pad0[312];
    char m_x;
    char f();
};

char CleanStage::f() {
    return m_x;
}
