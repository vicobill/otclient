#include "creature.h"
#include "tibiadat.h"
#include <framework/graphics/graphics.h>
#include <framework/graphics/framebuffer.h>
#include "game.h"

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glext.h>






// OW BART TEM COMO USAR 2 FRAMEBUFFER?
// SERIA O IDEAL PARA DESENHAR A COR DOS BONEQUIN.






Creature::Creature()
{
    m_type = Thing::TYPE_CREATURE;
}

ThingAttributes *Creature::getAttributes()
{
    return g_tibiaDat.getCreatureAttributes(m_outfit.type);
}

void Creature::draw(int x, int y)
{
    //ThingAttributes *creatureAttributes = getAttributes();
    int anim = 0;

    // draw outfit
    internalDraw(x, y, 0, m_direction, 0, 0, anim);

    // draw addons
    //for(int a = 0; a < m_outfit.addons; ++a) {
        //internalDraw(x, y, 0, m_direction, m_outfit.addons & (1 << a), 0, anim);
    //}
    //glPushAttrib(GL_CURRENT_BIT | GL_COLOR_BUFFER_BIT);

    //glBlendFunc(GL_DST_COLOR, GL_ONE_MINUS_SRC_ALPHA);

    //Color colors[4] = {Color::yellow, Color::red, Color::green, Color::blue};

    //for(int i = 0; i < 4; ++i) {


        /*g_graphics.bindColor(colors[i]);
        internalDraw(creatureAttributes->width*32 - 32, creatureAttributes->height*32 - 32, 1, m_direction, 0, 0, 0);
        framebuffer.unbind();


        g_graphics.bindColor(Color::green);*/
        //framebuffer.draw(x, y, creatureAttributes->width*32, creatureAttributes->height*32);
    //}
    //glPopAttrib();
}
