// from server: 55% by king_originala
struct ImageManager {
    void RemoveIcon(unsigned int id);
};

extern void __cdecl SetIcon(ImageManager*, unsigned int, const char*, int);

void __cdecl InitializeIcons(ImageManager* manager)
{
    manager->RemoveIcon(0x80BB);
    SetIcon(manager, 0x80BB, "stop", 16);
    SetIcon(manager, 0x80BB, "stop", 32);

    manager->RemoveIcon(0x80BD);
    SetIcon(manager, 0x80BD, "refresh_doc", 16);
    SetIcon(manager, 0x80BD, "refresh_doc", 32);

    manager->RemoveIcon(0x80BC);
    SetIcon(manager, 0x80BC, "home_brown", 16);
    SetIcon(manager, 0x80BC, "home_brown", 32);

    manager->RemoveIcon(0x80BA);
    SetIcon(manager, 0x80BA, "arrowleft_green", 16);
    SetIcon(manager, 0x80BA, "arrowleft_green", 32);

    manager->RemoveIcon(0x80B9);
    SetIcon(manager, 0x80B9, "arrowright_green", 16);
    SetIcon(manager, 0x80B9, "arrowright_green", 32);
}
