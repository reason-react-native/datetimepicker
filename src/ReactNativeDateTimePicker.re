open ReactNative;
include NativeElement;

// For localeId refer to
// https://developer.apple.com/library/archive/documentation/MacOSX/Conceptual/BPInternational/LanguageandLocaleIDs/LanguageandLocaleIDs.html
type locale = string;

module PickerEvent = {
  type payload = {
    target: option(int),
    timestamp: int,
  };
  include Event.SyntheticEvent({
    type _payload = payload;
  });
};

[@react.component] [@bs.module "@react-native-community/datetimepicker"]
external make:
  (
    ~ref: ref=?,
    // DateTimePicker props
    ~display: [
                | `default
                | `spinner
                | `calendar
                | `clock
                | `compact
                | `inline
              ]
                =?,
    ~is24Hour: bool=?,
    ~locale: locale=?,
    ~maximumDate: Js.Date.t=?,
    ~minimumDate: Js.Date.t=?,
    ~minuteInterval: [@bs.int] [
                       | [@bs.as 1] `_1
                       | [@bs.as 2] `_2
                       | [@bs.as 3] `_3
                       | [@bs.as 4] `_4
                       | [@bs.as 5] `_5
                       | [@bs.as 6] `_6
                       | [@bs.as 10] `_10
                       | [@bs.as 12] `_12
                       | [@bs.as 15] `_15
                       | [@bs.as 20] `_20
                       | [@bs.as 30] `_30
                     ]
                       =?,
    ~mode: [ | `date | `time | `datetime | `countdown]=?,
    ~neutralButtonLabel: string=?,
    ~onChange: (PickerEvent.t, Js.Date.t) => unit=?,
    ~textColor: string=?,
    ~timeZoneOffsetInMinutes: int=?,
    ~value: Js.Date.t,
    // View props 0.63.0
    ~accessibilityActions: array(Accessibility.actionInfo)=?,
    ~accessibilityElementsHidden: bool=?,
    ~accessibilityHint: string=?,
    ~accessibilityIgnoresInvertColors: bool=?,
    ~accessibilityLabel: string=?,
    ~accessibilityLiveRegion: Accessibility.liveRegion=?,
    ~accessibilityRole: Accessibility.role=?,
    ~accessibilityState: Accessibility.state=?,
    ~accessibilityValue: Accessibility.value=?,
    ~accessibilityViewIsModal: bool=?,
    ~accessible: bool=?,
    ~collapsable: bool=?,
    ~hitSlop: View.edgeInsets=?,
    ~importantForAccessibility: [@bs.string] [
                                  | `auto
                                  | `yes
                                  | `no
                                  | [@bs.as "no-hide-descendants"]
                                    `noHideDescendants
                                ]
                                  =?,
    ~nativeID: string=?,
    ~needsOffscreenAlphaCompositing: bool=?,
    ~onAccessibilityAction: Accessibility.actionEvent => unit=?,
    ~onAccessibilityEscape: unit => unit=?,
    ~onAccessibilityTap: unit => unit=?,
    ~onLayout: Event.layoutEvent => unit=?,
    ~onMagicTap: unit => unit=?,
    // Gesture Responder props
    ~onMoveShouldSetResponder: Event.pressEvent => bool=?,
    ~onMoveShouldSetResponderCapture: Event.pressEvent => bool=?,
    ~onResponderEnd: Event.pressEvent => unit=?,
    ~onResponderGrant: Event.pressEvent => unit=?,
    ~onResponderMove: Event.pressEvent => unit=?,
    ~onResponderReject: Event.pressEvent => unit=?,
    ~onResponderRelease: Event.pressEvent => unit=?,
    ~onResponderStart: Event.pressEvent => unit=?,
    ~onResponderTerminate: Event.pressEvent => unit=?,
    ~onResponderTerminationRequest: Event.pressEvent => bool=?,
    ~onStartShouldSetResponder: Event.pressEvent => bool=?,
    ~onStartShouldSetResponderCapture: Event.pressEvent => bool=?,
    ~pointerEvents: [@bs.string] [
                      | `auto
                      | `none
                      | [@bs.as "box-none"] `boxNone
                      | [@bs.as "box-only"] `boxOnly
                    ]
                      =?,
    ~removeClippedSubviews: bool=?,
    ~renderToHardwareTextureAndroid: bool=?,
    ~shouldRasterizeIOS: bool=?,
    ~style: Style.t=?,
    ~testID: string=?,
    ~children: React.element=?,
    // React Native Web Props
    ~onMouseDown: ReactEvent.Mouse.t => unit=?,
    ~onMouseEnter: ReactEvent.Mouse.t => unit=?,
    ~onMouseLeave: ReactEvent.Mouse.t => unit=?,
    ~onMouseMove: ReactEvent.Mouse.t => unit=?,
    ~onMouseOver: ReactEvent.Mouse.t => unit=?,
    ~onMouseOut: ReactEvent.Mouse.t => unit=?,
    ~onMouseUp: ReactEvent.Mouse.t => unit=?
  ) =>
  React.element =
  "default";
