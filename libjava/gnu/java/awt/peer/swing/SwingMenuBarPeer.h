
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_peer_swing_SwingMenuBarPeer__
#define __gnu_java_awt_peer_swing_SwingMenuBarPeer__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace peer
        {
          namespace swing
          {
              class SwingFramePeer;
              class SwingMenuBarPeer;
              class SwingMenuBarPeer$SwingMenuBar;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
        class Font;
        class Graphics;
        class Menu;
        class MenuBar;
      namespace event
      {
          class MouseEvent;
      }
    }
  }
}

class gnu::java::awt::peer::swing::SwingMenuBarPeer : public ::java::lang::Object
{

public:
  SwingMenuBarPeer(::java::awt::MenuBar *);
  virtual void setFramePeer(::gnu::java::awt::peer::swing::SwingFramePeer *);
  virtual void addMenu(::java::awt::Menu *);
  virtual void addHelpMenu(::java::awt::Menu *);
  virtual void delMenu(jint);
  virtual void dispose();
  virtual void setFont(::java::awt::Font *);
  virtual void setWidth(jint);
  virtual void peerPaint(::java::awt::Graphics *);
  virtual jint getHeight();
  virtual void handleMouseEvent(::java::awt::event::MouseEvent *);
  virtual void handleMouseMotionEvent(::java::awt::event::MouseEvent *);
public: // actually package-private
  ::java::awt::MenuBar * __attribute__((aligned(__alignof__( ::java::lang::Object)))) awtMenuBar;
  ::gnu::java::awt::peer::swing::SwingMenuBarPeer$SwingMenuBar * menuBar;
  ::gnu::java::awt::peer::swing::SwingFramePeer * framePeer;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_peer_swing_SwingMenuBarPeer__
