// from server: 86% by colin
// roc 2007-08 0057aa60  unit: RBX::IScriptOwner  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057aa60

extern "C" int __cdecl sub_630d36(int, int, int, int, int);
extern "C" int __cdecl sub_5bd420();

struct IScriptOwner {
};

int __cdecl getScript(int arg) {
    int result = sub_630d36(arg, 0, 0x881f4c, 0x898ee8, 0);
    if (result) {
        return sub_5bd420();
    }
    return 0;
}
