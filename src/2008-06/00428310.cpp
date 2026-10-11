// from server: 46% by colin
// roc 2008-06 00428310  unit: MainLogManager  size: 453 bytes
// Reconstructed from assembly evidence.

typedef unsigned long DWORD;
typedef int BOOL;
typedef const char* LPCSTR;
typedef char* LPSTR;

struct String {
    char pad[16];
    char* ptr;
    DWORD len;
    DWORD cap;
};

extern "C" {
    BOOL __stdcall DeleteFileA(LPCSTR);
    BOOL __stdcall MoveFileA(LPCSTR, LPCSTR);
    BOOL __stdcall PathAppendA(LPSTR, LPCSTR);
    BOOL __stdcall PathFileExistsA(LPCSTR);
    BOOL __stdcall PathRemoveFileSpecA(LPSTR);
    LPSTR __stdcall PathStripPathA(LPSTR);
    int __stdcall _mkdir(LPCSTR);
}

extern void (__stdcall *p_803f10)(String*, LPCSTR);
extern DWORD (__stdcall *p_802fe0)(String*);
extern String* (__stdcall *p_803384)(String*, DWORD);
extern void (__stdcall *p_802b20)(String*);
extern void (__stdcall *p_803380)(String*, int);
extern String* (__stdcall *p_802464)(String*);
extern DWORD (__stdcall *p_802fe4)(DWORD);
extern void (__stdcall *p_802b18)(char*, DWORD);
extern DWORD (__stdcall *p_803ee0)(String*);
extern BOOL (__stdcall *p_802b1c)(LPCSTR);
extern void (__stdcall *p_80276c)(LPCSTR);
extern void (__stdcall *p_802b10)(LPCSTR);
extern BOOL (__stdcall *p_802200)(LPCSTR, LPCSTR);
extern void (__stdcall *p_8021fc)(LPCSTR);
extern void (__stdcall *p_802458)(void*, LPCSTR);
extern void (__stdcall *p_803f14)(String*);
extern void (__stdcall *p_802468)(String*);

struct MainLogManager {
    void* __cdecl f_00428310(LPCSTR name);
};

void* MainLogManager::f_00428310(LPCSTR name) {
    String s1;
    String s2;
    String s3;
    void* result = 0;

    p_803f10(&s1, name);
    DWORD pid = p_802fe0(&s1);
    String* t = p_803384(&s2, pid);
    p_802b20(t);
    p_803380(&s2, -1);

    String* dir = p_802464(&s3);
    DWORD len = p_802fe4((DWORD)dir);
    DWORD slen = p_802fe0(&s1);
    DWORD total = len + slen + 1;
    String* t2 = p_803384(&s2, total);
    p_802b18((char*)t2, (DWORD)dir);
    p_803380(&s2, -1);

    DWORD exists = p_803ee0(&s1);
    if (!p_802b1c((LPCSTR)exists)) {
        DWORD e2 = p_803ee0(&s1);
        p_80276c((LPCSTR)e2);
    }

    p_803f10(&s1, name);
    DWORD pid2 = p_802fe0(&s1);
    String* t3 = p_803384(&s2, pid2);
    p_802b10((LPCSTR)t3);
    p_803380(&s2, -1);

    DWORD e3 = p_803ee0(&s1);
    DWORD len2 = p_802fe4(e3);
    DWORD slen2 = p_802fe0(&s1);
    DWORD total2 = len2 + slen2 + 1;
    String* t4 = p_803384(&s2, total2);
    p_802b18((char*)t4, e3);
    p_803380(&s2, -1);

    DWORD e4 = p_803ee0(&s1);
    if (!p_802200((LPCSTR)e4, name)) {
        p_8021fc(name);
    }

    DWORD e5 = p_803ee0(&s1);
    p_802458(result, (LPCSTR)e5);

    p_803f14(&s2);
    p_803f14(&s1);
    p_802468(&s3);

    return result;
}
