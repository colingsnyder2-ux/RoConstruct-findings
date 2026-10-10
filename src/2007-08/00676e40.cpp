// from server: 27% by colin
struct CArray {
    void Construct(int);
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl _eh_restore();

struct CArrayHolder {
    CArray* p;
};

CArray* __cdecl MakeCArray();

CArray* __cdecl MakeCArray() {
    CArray* result = 0;
    CArray* mem = (CArray*)operator_new(0x150);
    if (mem != 0) {
        mem->Construct(0);
        result = mem;
    }
    return result;
}
