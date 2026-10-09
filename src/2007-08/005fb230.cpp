// from server: 81% by colin
// roc 2007-08 005fb230  unit: RBX::HingeTool  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fb230
//
// 005fb230  56                   push esi
// 005fb231  8b742408             mov esi, dword ptr [esp + 8]
// 005fb235  8b0e                 mov ecx, dword ptr [esi]
// 005fb237  e8248bf7ff           call 0x573d60
// 005fb23c  6a06                 push 6
// 005fb23e  8bce                 mov ecx, esi
// 005fb240  e82be0fbff           call 0x5b9270
// 005fb245  6a00                 push 0
// 005fb247  8bce                 mov ecx, esi
// 005fb249  e872e0fbff           call 0x5b92c0
// 005fb24e  d9ee                 fldz 
// 005fb250  51                   push ecx
// 005fb251  d91c24               fstp dword ptr [esp]
// 005fb254  8bce                 mov ecx, esi
// 005fb256  e825e1fbff           call 0x5b9380
// 005fb25b  d9ee                 fldz 
// 005fb25d  51                   push ecx
// 005fb25e  d91c24               fstp dword ptr [esp]
// 005fb261  8bce                 mov ecx, esi
// 005fb263  e8e8e1fbff           call 0x5b9450
// 005fb268  8b0e                 mov ecx, dword ptr [esi]
// 005fb26a  e8118bf7ff           call 0x573d80
// 005fb26f  5e                   pop esi
// 005fb270  c20400               ret 4

struct MouseCommand {
    void setCursorName(const char*);
    void setVerb(const char*);
    void setEnabled(bool);
    void setPriority(int);
    void setWorkspace(void*);
};

struct SurfaceTool : MouseCommand {
    void setSurface(int);
    void setSurfaceType(int);
    void setSurfaceValue(float);
    void setSurfaceValue2(float);
};

struct HingeTool : SurfaceTool {
    HingeTool(void* workspace);
};

HingeTool::HingeTool(void* workspace) {
    setWorkspace(*(void**)this);
    setSurface(6);
    setSurfaceType(0);
    setSurfaceValue(0.0f);
    setSurfaceValue2(0.0f);
    setWorkspace(*(void**)this);
}
