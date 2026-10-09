// from server: 80% by colin
// roc 2007-08 005fb320  unit: RBX::OscillateMotorTool  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fb320
//
// 005fb320  56                   push esi
// 005fb321  8b742408             mov esi, dword ptr [esp + 8]
// 005fb325  8b0e                 mov ecx, dword ptr [esi]
// 005fb327  e8348af7ff           call 0x573d60
// 005fb32c  6a07                 push 7
// 005fb32e  8bce                 mov ecx, esi
// 005fb330  e83bdffbff           call 0x5b9270
// 005fb335  6a0d                 push 0xd
// 005fb337  8bce                 mov ecx, esi
// 005fb339  e882dffbff           call 0x5b92c0
// 005fb33e  d90514cf7b00         fld dword ptr [0x7bcf14]
// 005fb344  51                   push ecx
// 005fb345  8bce                 mov ecx, esi
// 005fb347  d91c24               fstp dword ptr [esp]
// 005fb34a  e831e0fbff           call 0x5b9380
// 005fb34f  d905b07e7900         fld dword ptr [0x797eb0]
// 005fb355  51                   push ecx
// 005fb356  8bce                 mov ecx, esi
// 005fb358  d91c24               fstp dword ptr [esp]
// 005fb35b  e8f0e0fbff           call 0x5b9450
// 005fb360  8b0e                 mov ecx, dword ptr [esi]
// 005fb362  e8198af7ff           call 0x573d80
// 005fb367  5e                   pop esi
// 005fb368  c20400               ret 4

struct OscillateMotorTool {
    void* field_0;
    void construct();
    void setInt(int value);
    void setInt2(int value);
    void setFloat(float value);
    void setFloat2(float value);
    void finish();
};

extern float g_7bcf14;
extern float g_797eb0;

void OscillateMotorTool::construct() {
    void* p = field_0;
    ((void (__thiscall*)(void*))0x573d60)(p);
    setInt(7);
    setInt2(0xd);
    setFloat(g_7bcf14);
    setFloat2(g_797eb0);
    ((void (__thiscall*)(void*))0x573d80)(field_0);
}
