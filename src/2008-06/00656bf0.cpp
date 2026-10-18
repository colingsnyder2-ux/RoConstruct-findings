// from server: 94% by colin
struct Vec2 { float x; float y; };

extern "C" Vec2* __cdecl get_zero_vec();

struct ArrowPanel {
    virtual bool can_use();
    Vec2* set_pos(Vec2* out);
    void helper(Vec2* out);
};

Vec2* ArrowPanel::set_pos(Vec2* out) {
    if (can_use()) {
        helper(out);
        return out;
    }
    Vec2* z = get_zero_vec();
    out->x = z->x;
    out->y = z->y;
    return out;
}
