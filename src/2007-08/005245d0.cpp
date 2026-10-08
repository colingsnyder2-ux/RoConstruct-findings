// from server: 93% by colin
// roc 2007-08 005245d0  unit: G3D::Line  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005245d0
//
// 005245d0  8b442408             mov eax, dword ptr [esp + 8]
// 005245d4  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005245d7  51                   push ecx
// 005245d8  ff1518e97700         call dword ptr [0x77e918]
// 005245de  59                   pop ecx
// 005245df  c3                   ret 

extern "C" int (__cdecl *fclose)(void* stream);

struct Line {
    int a;
    int b;
    int c;
    void* file;
};

void closeLine(Line* line, int unused) {
    fclose(line->file);
}
